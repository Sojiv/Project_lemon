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

#ifndef LINUX_PROC_H
#define LINUX_PROC_H

#include <QtCore>
#include "stdio.h"

#ifdef Q_OS_LINUX

struct proc_info {
    int pid;
    char comm[100];
    char state[10];
    int ppid;
    int pgrp;
    int session;
    int tty_nr;
    int tpgid;
    unsigned flags;
    unsigned long minflt;
    unsigned long cminflt;
    unsigned long majflt;
    unsigned long cmajflt;
    unsigned long utime;
    unsigned long stime;
    long cutime;
    long cstime;
    long priority;
    long nice;
    long num_threads;
    long itrealvalue;
    unsigned long long starttime;
    unsigned long vsize;
    long rss;
    unsigned long rsslim;
    unsigned long startcode;
    unsigned long endcode;
    unsigned long startstack;
    unsigned long kstkesp;
    unsigned long kstkeip;
    unsigned long signal;
    unsigned long blocked;
    unsigned long sigignore;
    unsigned long sigcatch;
    unsigned long wchan;
    unsigned long nswap;
    unsigned long cnswap;
    int exit_signal;
    int processor;
    unsigned rt_priority;
    unsigned policy;
    unsigned long long delayacct_blkio_ticks;
    unsigned long guest_time;
    long cguest_time;
};

bool get_pid_stat(int pid, proc_info *info)
{
    char buf[100];
    sprintf(buf, "/proc/%d/stat", pid);
    FILE *in = fopen(buf, "r");
    
    if (in == NULL) return false;
    
    fscanf(in, "%d", &info->pid);
    fscanf(in, "%s", &info->comm);
    fscanf(in, "%s", &info->state);
    fscanf(in, "%d", &info->ppid);
    fscanf(in, "%d", &info->pgrp);
    fscanf(in, "%d", &info->session);
    fscanf(in, "%d", &info->tty_nr);
    fscanf(in, "%d", &info->tpgid);
    fscanf(in, "%u", &info->flags);
    fscanf(in, "%lu", &info->minflt);
    fscanf(in, "%lu", &info->cminflt);
    fscanf(in, "%lu", &info->majflt);
    fscanf(in, "%lu", &info->cmajflt);
    fscanf(in, "%lu", &info->utime);
    fscanf(in, "%lu", &info->stime);
    fscanf(in, "%ld", &info->cutime);
    fscanf(in, "%ld", &info->cstime);
    fscanf(in, "%ld", &info->priority);
    fscanf(in, "%ld", &info->nice);
    fscanf(in, "%ld", &info->num_threads);
    fscanf(in, "%ld", &info->itrealvalue);
    fscanf(in, "%llu", &info->starttime);
    fscanf(in, "%lu", &info->vsize);
    fscanf(in, "%ld", &info->rss);
    fscanf(in, "%lu", &info->rsslim);
    fscanf(in, "%lu", &info->startcode);
    fscanf(in, "%lu", &info->endcode);
    fscanf(in, "%lu", &info->startstack);
    fscanf(in, "%lu", &info->kstkesp);
    fscanf(in, "%lu", &info->kstkeip);
    fscanf(in, "%lu", &info->signal);
    fscanf(in, "%lu", &info->blocked);
    fscanf(in, "%lu", &info->sigignore);
    fscanf(in, "%lu", &info->sigcatch);
    fscanf(in, "%lu", &info->wchan);
    fscanf(in, "%lu", &info->nswap);
    fscanf(in, "%lu", &info->cnswap);
    fscanf(in, "%d", &info->exit_signal);
    fscanf(in, "%d", &info->processor);
    fscanf(in, "%u", &info->rt_priority);
    fscanf(in, "%u", &info->policy);
    fscanf(in, "%llu", &info->delayacct_blkio_ticks);
    fscanf(in, "%lu", &info->guest_time);
    fscanf(in, "%ld", &info->cguest_time);
    
    fclose(in);
    
    return true;
}

#endif // Q_OS_LINUX
#endif // LINUX_PROC_H
