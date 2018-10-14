
#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

class A{
    public:

        A(const char* _str) {
            size_t _len = strlen(_str);
            if (_len < 16) {
                m_p = local;
                memset(m_p, 0, sizeof(local));
                strcpy(local, _str);
            } else {
                m_p = (char*)malloc(sizeof(char)*_len);
                cap = _len;
                strcpy(m_p, _str);
            }
        }

        bool is_local() {
            return m_p == local;
        }

        union{
            char local[16];
            size_t cap;
        };
        char *m_p;
};

int main(void)
{
    A a("Hello"), b("yes, my name is liyinuo, and hello world");
    cout << a.is_local() << " " << b.is_local() << endl;
    cout << &(a.local) << " " << &(a.cap) << endl;
    cout << a.m_p << endl;
    cout << b.m_p << endl;

    return 0;
}

