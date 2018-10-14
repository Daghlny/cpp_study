
#include <string>
#include <set>
#include <algorithm>
#include <cstdio>
#include <iostream>

using namespace std;

int splitWhiteListToSet(string strWhiteList, set<unsigned>& uids, char delim='|')
{
    int iBegin = 0, iEnd = strWhiteList.find_first_of(delim, 0);
    while ( iEnd != string::npos ) {
        if (iBegin != iEnd) {
            uids.insert(atoi(strWhiteList.substr(iBegin, iEnd-iBegin).c_str()));
        }
        iBegin = iEnd + 1;
        iEnd = strWhiteList.find_first_of(delim, iBegin);
    }
    if (iBegin != iEnd && iBegin < int(strWhiteList.size())) {
        uids.insert(atoi(strWhiteList.substr(iBegin).c_str()));
    }

    return 0;
}

int main(void)
{

    string s;
    cin >> s;
    set<unsigned> uids;
    splitWhiteListToSet(s, uids);
    for (auto uid : uids) 
        cout << uid << " ";
    cout << endl;

}
