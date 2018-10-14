
#include <stdio.h>

typedef struct {
    int a;
    double f;
} S1;

typedef struct {
    char a;
    S1 s1;
} S2;


int main(void)
{
    printf("int:%lu\nlong:%lu\ndouble:%lu\n", sizeof(int), sizeof(long), sizeof(double));
    printf("S1:%lu\nS2:%lu\n", sizeof(S1), sizeof(S2));

    return 0;
}
