
#include <iostream>

using namespace std;

class Parent {
    public:
        virtual void f() { cout << "Parent::f()" << endl; }
};

class Child: public Parent {
    public:
        virtual void f() { cout << "Child::f()" << endl; }
};

int main(void)
{
    //Child *c = new Child();
    //Parent *p = c;
    //p->f();
    //c->Parent::f();
    Parent* ptr = new Child();
    ptr->f();

    cout << (4194311 & 8921120) << endl;

    return 0;
}
