
#include <iostream>
#include <stdio.h>

using namespace std;

class Foo{
    public:
        Foo() {
            cout << "Enter Foo()" << endl;
        }
        ~Foo() {
            cout << "Enter ~Foo()" << endl;
        }
};

class Bar{
    public:
        Bar(): f() {
            //f = new Foo();
            throw "exception";
        }
    private:
        Foo f;
};

int main(void)
{
    //Bar();
    int num = 12;
    const int& const_ref = num;
    cout << const_ref << endl;
    int *ptr = (int*)(&const_ref);
    printf("address: %p\n", ptr);
    *ptr = 13;
    cout << num << endl;

    
    return 0;
}

