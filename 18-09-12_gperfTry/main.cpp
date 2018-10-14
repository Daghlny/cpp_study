
#include <vector>
#include <iostream>

using namespace std;

int main(void)
{
    int n = 1000000;
    int m = 10;
    vector<int> vec;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            vec.push_back(m*m);
        }
    }

    return 0;
}
