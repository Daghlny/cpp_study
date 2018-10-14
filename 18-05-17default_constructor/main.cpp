
#include <iostream>

using namespace std;

class A {
    public:
        A(bool _isTrue = true, int _num = 0): isTrue(_isTrue), num(_num) {}
        bool isTrue;
        int num;
};

int main(void)
{
    A *pa = new A();
    if (pa->isTrue)
        cout << pa->num << endl;
    new(pa) A(true, 1);
    if (pa->isTrue)
        cout << pa->num << endl;
    return 0;
}

