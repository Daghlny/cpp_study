
#include <iostream>

using namespace std;

class Foo{
    public:
        Foo(int _i): num(_i) {}
        operator int() {return num; }
    private:
        int num;
};

int main(void) 
{
    Foo f = 2;
    cout << (int)f << endl;

    return 0;
}
