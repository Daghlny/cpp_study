
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    pid_t childid = 0;
    int *a = (int*)malloc(sizeof(int));
    *a = 43;
    if ( (childid = fork()) != 0 ) {
        printf("Father Process: %p\n", a);
        *a = 12;
        printf("Father Process: %p\n", a);
    } else {
        printf("Child Process: %p\n", a);
        *a = 13;
        printf("Child Process: %p\n", a);
        exit(0);
    }
    int exitstatus;
    wait(&exitstatus);

    return 0;
}
