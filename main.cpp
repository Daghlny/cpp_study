#include <stdio.h>
#include <iostream>

using namespace std;

class A{
    public:
        A(): a(42){}
        int a;
};

class B: public A {
    public:
        B(): a(1){}
        int a;
};

int main(void)
{
    A* p = new B();
    cout << p->a << endl;
    return 0;
}
