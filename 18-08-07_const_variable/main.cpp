
#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
    int a = 42;
    const int b = a;

    printf("a:%p\nb:%p\n", &a, &b);
    printf("sizeof(int): %d\n", sizeof(int));

    int* pb = &a - sizeof(int);
    *pb = 34;

    printf("a:%d\nb:%d\n", a, b);

    return 0;
}
