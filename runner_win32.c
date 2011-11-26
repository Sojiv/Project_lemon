/***************************************************************************
    This file is part of Project Lemon
    Copyright (C) 2011 Zhipeng Jia

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
***************************************************************************/

#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <psapi.h>
#include <stdio.h>
#include <tchar.h>
#include <time.h>

PROCESS_INFORMATION pi;

void cleanUp() {
    TerminateProcess(pi.hProcess, 0);
    exit(2);
}

int main(int argc, char *argv[]) {
    SetErrorMode(SEM_NOGPFAULTERRORBOX);
    
    STARTUPINFO si;
    SECURITY_ATTRIBUTES sa;
    
    ZeroMemory(&si, sizeof(si));
    si.cb = sizeof(si);
    si.dwFlags = STARTF_USESTDHANDLES;
    ZeroMemory(&pi, sizeof(pi));
    ZeroMemory(&sa, sizeof(sa));
    sa.bInheritHandle = TRUE;
    
    if (_tcslen(argv[3]) > 0) {
        si.hStdInput = CreateFile(argv[3], GENERIC_READ,
                                  FILE_SHARE_READ | FILE_SHARE_WRITE | FILE_SHARE_DELETE, &sa,
                                  OPEN_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
    }
    if (_tcslen(argv[4]) > 0) {
        si.hStdOutput = CreateFile(argv[4], GENERIC_WRITE,
                                   FILE_SHARE_READ | FILE_SHARE_WRITE | FILE_SHARE_DELETE, &sa,
                                   CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
    }
    if (_tcslen(argv[5]) > 0) {
        si.hStdError = CreateFile(argv[5], GENERIC_WRITE,
                                  FILE_SHARE_READ | FILE_SHARE_WRITE | FILE_SHARE_DELETE, &sa,
                                  CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
    }
    
    int timeLimit, memoryLimit;
    sscanf(argv[6], "%d", &timeLimit);
    sscanf(argv[7], "%d", &memoryLimit);
    memoryLimit *= 1024 * 1024;
    
    if (! CreateProcess(argv[1], argv[2], NULL, &sa, TRUE, HIGH_PRIORITY_CLASS | CREATE_NO_WINDOW,
                        NULL, NULL, &si, &pi)) {
        if (_tcslen(argv[3]) > 0) CloseHandle(si.hStdInput);
        if (_tcslen(argv[4]) > 0) CloseHandle(si.hStdOutput);
        if (_tcslen(argv[5]) > 0) CloseHandle(si.hStdError);
        return 1;
    }
    
    PROCESS_MEMORY_COUNTERS_EX info;
    info.cb = sizeof(info);
    GetProcessMemoryInfo(pi.hProcess, (PROCESS_MEMORY_COUNTERS*)&info, info.cb);
    if (memoryLimit != -1 && info.PrivateUsage > memoryLimit) {
        TerminateProcess(pi.hProcess, 0);
        if (_tcslen(argv[3]) > 0) CloseHandle(si.hStdInput);
        if (_tcslen(argv[4]) > 0) CloseHandle(si.hStdOutput);
        if (_tcslen(argv[5]) > 0) CloseHandle(si.hStdError);
        CloseHandle(pi.hProcess);
        CloseHandle(pi.hThread);
        return 4;
    }
    
    if (memoryLimit != -1)
        SetProcessWorkingSetSize(pi.hProcess, memoryLimit / 4, memoryLimit);
    else
        SetProcessWorkingSetSize(pi.hProcess, 128 * 1024 * 1024, 512 * 1024 * 1024);
    
    signal(SIGINT, cleanUp);
    signal(SIGABRT, cleanUp);
    signal(SIGTERM, cleanUp);
    
    BOOL flag = FALSE;
    int startClock = clock();
    while ((clock() - startClock) <= timeLimit) {
        if (WaitForSingleObject(pi.hProcess, 0) == WAIT_OBJECT_0) {
            flag = TRUE;
            break;
        }
        if (memoryLimit != -1) {
            GetProcessMemoryInfo(pi.hProcess, (PROCESS_MEMORY_COUNTERS*)&info, info.cb);
            if (info.PrivateUsage > memoryLimit) {
                TerminateProcess(pi.hProcess, 0);
                if (_tcslen(argv[3]) > 0) CloseHandle(si.hStdInput);
                if (_tcslen(argv[4]) > 0) CloseHandle(si.hStdOutput);
                if (_tcslen(argv[5]) > 0) CloseHandle(si.hStdError);
                CloseHandle(pi.hProcess);
                CloseHandle(pi.hThread);
                return 4;
            }
        }
        Sleep(10);
    }
    
    if (! flag) TerminateProcess(pi.hProcess, 0);
    
    FILETIME creationTime, exitTime, kernelTime, userTime;
    GetProcessTimes(pi.hProcess, &creationTime, &exitTime, &kernelTime, &userTime);
    
    SYSTEMTIME realTime;
    FileTimeToSystemTime(&userTime, &realTime);
    
    int timeUsed = realTime.wMilliseconds
                 + realTime.wSecond * 1000
                 + realTime.wMinute * 60 * 1000
                 + realTime.wHour * 60 * 60 * 1000;
    printf("%d\n", timeUsed);
    
    GetProcessMemoryInfo(pi.hProcess, (PROCESS_MEMORY_COUNTERS*)&info, info.cb);
    printf("%d\n", (int)(info.PeakWorkingSetSize));
    
    DWORD exitCode;
    GetExitCodeProcess(pi.hProcess, &exitCode);
    
    if (_tcslen(argv[3]) > 0) CloseHandle(si.hStdInput);
    if (_tcslen(argv[4]) > 0) CloseHandle(si.hStdOutput);
    if (_tcslen(argv[5]) > 0) CloseHandle(si.hStdError);
    CloseHandle(pi.hProcess);
    CloseHandle(pi.hThread);
    
    if (! flag) return 3;
    if (exitCode != 0) return 2;
    
    return 0;
}
