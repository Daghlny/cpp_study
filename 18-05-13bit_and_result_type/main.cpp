
#include <iostream>
using namespace std;
int main(void)
{
    int i = 0x01;
    int j = 2;

    auto k = i&j;

    cout << k << endl;

    return 0;
}
