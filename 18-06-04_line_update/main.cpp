
#include <cstdio>
#include <unistd.h>

int main(void)
{
    int i, percentage = 0;
    for (i = 0; i < 100; ++i) {
        printf("\r[%3d]:", i);
        for (int j = 0; j < i; ++j) {
            if (j % 2 == 0)
                printf("#");
        }
        fflush(stdout);
        sleep(1);
    }

    printf("\n");

    return 0;
}
