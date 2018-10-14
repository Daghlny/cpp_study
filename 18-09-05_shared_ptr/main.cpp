
#include <iostream>
#include <memory>
#include <vector>

using namespace std;

class Observer;

class Subject {
    private: 
        vector<shared_ptr<Observer>> observers;
    public:
        Subject(){}
        void add(shared_ptr<Observer>& p) {
            observers.push_back(p);
        }
        ~Subject(){
            cout << "enter ~Subject()" << endl;
        }
};

class Observer {
    private:
        shared_ptr<Subject> object;
    public:
        Observer(shared_ptr<Subject> p) : object(p) {}
};

int main(void)
{
    shared_ptr<Subject> p = make_shared<Subject>();
    //shared_ptr<Observer> ob = make_shared<Observer>(p);
    //p->add(ob);
    cout << "p use_count: " << p.use_count() << endl;

    return 0;
}

