
#include <iostream>
#include <cstdlib>

using namespace std;

class Base {
    public:
        void func() { cout << "Base::func()" << endl; }
};

class Derived: public Base {
    public:
        void func() { cout << "Derived::func()" << endl; }
};

int main(void)
{
    Derived *dp = new Derived();
    dp->func();
    Derived d;
    dp->Base::func();
    d.Base::func();
    return 0;
}
