
#include <typeinfo>
#include <iostream>

using namespace std;

class Foo {
    public:
        int val;
        virtual void print() { cout << "foo" << endl;  }
};

class Bar: public Foo{
    public:
        double f;
        virtual void print() { cout << "bar" << endl; }

};

int main(void)
{
    Foo* ptr_f = new Bar();
    Foo& ref_f = *ptr_f;
    const type_info& ti1 = typeid(*ptr_f);
    cout << ti1.name() << endl;

    return 0;
}

