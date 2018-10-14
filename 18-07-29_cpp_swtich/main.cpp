
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int i = 0;
    switch (i) {
        case 0:
            cout << "case == 0" << endl;
        case 1:
            cout << "case == 1" << endl;
        case 2:
            cout << "case == 2" << endl;
        default:
            cout << "default" << endl;
    }

    return 0;
}
