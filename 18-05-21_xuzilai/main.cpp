
#include <string>
#include <unordered_map>
#include <iostream>

using std::cout;
using std::endl;
using std::string;
using std::unordered_map;

class Base {
    public:
        Base(){}
        virtual ~Base() = default;
        void display() {
            for (auto &w : testMap) 
                cout << w.first << ' ' << w.second << endl;
        }
    protected:
        unordered_map<string, int> testMap = { {"a", 1}, {"b", 2}, {"c", 3},  {"d", 4}};
};

class unBase : public Base {
    public:
        unBase() {
            testMap["a"] = 10;
        }
};

int main(void)
{
    unBase test;
    test.display();

    return 0;
}
