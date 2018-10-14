
#include <stdio.h>
#include <time.h>
#include <string.h>


int main(void)
{
    char buff[512] = {0};
    //int64_t  u64Num_1 = 1;
    //int64_t  u64Num_2 = 2;
    //cout << sizeof(long long) << endl;
    //cout << sizeof(int) << endl;
    const char* strName = "HelloPotter";

    snprintf(buff, sizeof(buff), "num1=%d&num2=%d&name=%s", u64Num_1, u64Num_2, strName);
    printf("%s\n", buff);
    printf("%u\n", sizeof(long));

    return 0;
}
