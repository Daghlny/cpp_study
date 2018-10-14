
#include <iostream>
#include <string>

using namespace std;

int countChar(const string& str) {
    int n = str.size();
    int result = 0;
    for (int i = 0; i < n; ++i) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            result ++;
    }
    return result;
}

class Foo{
    public:
        Foo(){
            cout << "Foo()" << endl;
        }
        Foo(const Foo& f){
            cout << "Foo(f)" << endl;
        }
        Foo& operator=(const Foo& f) {
            cout << "Foo::operator=" << endl;
        }
        ~Foo(){
            cout << "~Foo()" << endl;
        }
};

Foo func() {
    cout << "Enter func()" << endl;
    Foo f;
    cout << "Exit func()" << endl;
    return f;
}

int main(void)
{
    Foo f = func();
    cout << "--------------" << endl;
    f = func();
    return 0;
}
