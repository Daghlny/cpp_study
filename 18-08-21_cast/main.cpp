
#include <iostream>

using namespace std;

class Father{
    public:
        Father(){
            cout << "Father()" << endl;
        }
        virtual void func(){
            cout << "Father::func()" << endl;
        }
};

class Child: public Father {
    public:
        Child(){
            cout << "Child()" << endl;
        }
        void func(){
            cout << "Child::func()" << endl;
        }
};

int main(void)
{
    Father *f = new Child();
    f->func();

    cout << "-------------------------" << endl;
    Father *new_f = dynamic_cast<Father*>(f);
    if (new_f != NULL)
        new_f->func();
    else
        cout << "new_f is NULL" << endl;

    Child* new_c = dynamic_cast<Child*>(new_f);
    if (new_c != NULL)
        new_c->func();
    else
        cout << "new_c is NULL" << endl;
    
    cout << "--------------------------" << endl;
    Father *ptrF = new Father();
    new_c = dynamic_cast<Child*>(ptrF);
    if (new_c != NULL)
        new_c->func();
    else
        cout << "new_c is NULL" << endl;

    return 0;
}

