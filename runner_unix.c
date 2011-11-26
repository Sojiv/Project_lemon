
#include <sys/types.h>
#include <sys/time.h>
#include <sys/resource.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    int timeLimit, memoryLimit;
    sscanf(argv[5], "%d", &timeLimit);
    timeLimit = (timeLimit - 1) / 1000 + 1;
    sscanf(argv[6], "%d", &memoryLimit);
    memoryLimit *= 1024 * 1024;
    
    int pid = fork();
    if (pid > 0) {
        struct rusage usage;
        int status;
        if (wait4(pid, &status, 0, &usage) == -1)
            return 1;
        if (WIFEXITED(status)) {
            if (WEXITSTATUS(status) == 1) return 1;
            printf("%d\n", (int)(usage.ru_utime.tv_sec * 1000 + usage.ru_utime.tv_usec / 1000));
            printf("%d\n", (int)(usage.ru_maxrss) * 1024);
            if (WEXITSTATUS(status) != 0) return 2;
            return 0;
        }
        if (WIFSIGNALED(status)) {
            printf("%d\n", (int)(usage.ru_utime.tv_sec * 1000 + usage.ru_utime.tv_usec / 1000));
            printf("%d\n", (int)(usage.ru_maxrss) * 1024);
            if (WTERMSIG(status) == SIGXCPU) return 3;
            if (WTERMSIG(status) == SIGKILL) return 4;
            if (WTERMSIG(status) == SIGABRT) return 4;
            return 2;
        }
    } else {
        if (strlen(argv[2]) > 0) freopen(argv[2], "r", stdin);
        if (strlen(argv[3]) > 0) freopen(argv[3], "w", stdout);
        if (strlen(argv[4]) > 0) freopen(argv[4], "w", stderr);
        setrlimit(RLIMIT_AS, &(struct rlimit){memoryLimit, memoryLimit});
        setrlimit(RLIMIT_CPU, &(struct rlimit){timeLimit, timeLimit + 1});
        if (execl(argv[1], "dummy", NULL) == -1) return 1;
    }
    
    return 0;
}

