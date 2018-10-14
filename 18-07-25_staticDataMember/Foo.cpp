
#include "Foo.h"

#include <unordered_set>
#include <iostream>

using namespace std;

namespace Fname {
    unordered_set<int> Foo::uset = std::unordered_set<int>();
}

int main(void)
{
    Fname::Foo::uset.insert(2);
    Fname::Foo::uset.insert(3);

    for (auto val : Fname::Foo::uset)
        cout << val << " ";

    cout << endl;

    return 0;
}
