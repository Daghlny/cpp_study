
#include <iostream>
#include <memory>
#include <utility>

using namespace std;

int main(void)
{
    unique_ptr<int> un_ptr(new int(43));
    cout << *un_ptr << endl;
    unique_ptr<int> un_ptr_2 = move(un_ptr);
    cout << *un_ptr_2 << endl;

    return 0;
}
