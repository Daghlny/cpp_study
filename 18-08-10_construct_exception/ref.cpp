
//#include <stdio.h>
//#include <iostream>
//
//using namespace std;

int main(void)
{
    int num = 12;
    int& ref = num;
    //int* ptr = (int*)(*(&num+1));
    ////printf("&num:%p\n", &num);
    ////for (int i = -2; i < 3; ++i) {
    ////    printf("%d:%p\n", i, (int*)(*(&num+i)));
    ////}
    ////fflush(stdout);
    //printf("%d\n%d\n", &num, ptr);
    //printf("-----------------------\n");
    //*ptr = 13;
    //printf("%d\n", num);
    //printf("%d\n%d\n", num, *ptr);
    
    return 0;
}
