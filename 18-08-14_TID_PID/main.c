
#include <stdio.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/syscall.h>
#include <unistd.h>

void* func(void* param)
{
    int* real_param = (int*)param;
    printf("child: tid=%d, pid=%d\n", pthread_self(), syscall(SYS_gettid));
    printf("get the param: %d\n", *real_param);
    return NULL;
}

int main(int argc, char** argv)
{
    pthread_t thread_id;
    int param = 1;
    pthread_create(&thread_id, NULL, func, &param);
    pthread_join(thread_id, NULL);
    
    int pid = 0;
    if ((pid = fork()) == 0) {
        printf("child process: pid=%d\n", getpid());
        return 0;
    } else {
        printf("parent process: pid=%d\n", getpid());
        sleep(1);
    }

    return 0;
}
