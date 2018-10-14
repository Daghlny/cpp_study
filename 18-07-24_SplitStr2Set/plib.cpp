
#include <string>
#include <set>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

void SplitString( const std::string& str, const std::string& delim, std::vector<std::string>& out)
{
        out.clear();
        if (str.empty() || delim.empty())
            return;

        bool find_one = false; // delim是否在str中出现过
        size_t beg_pos = 0;
        size_t end_pos = 0;
        while (beg_pos < str.size())
        {
            cout << beg_pos << " " << end_pos << endl;
            end_pos = str.find(delim.c_str(), beg_pos);
            if (std::string::npos == end_pos) {
                if (beg_pos != 0) 
                    out.push_back(str.substr(beg_pos));
                break;
            } else {
                find_one = true;
            }

            if (end_pos <= beg_pos) {
                ++beg_pos;
                continue;
            }

            out.push_back(str.substr(beg_pos, (end_pos - beg_pos)));
            beg_pos = end_pos + delim.size();
        }

        if (!find_one && out.empty()) 
            out.push_back(str);
}


int main(void)
{
    string s;
    cin >> s;
    vector<string> out;
    string delim = "|";
    SplitString(s, delim, out);
    for (auto val : out)
        cout << "[" << val << "]";
    cout << endl;
    return 0;
}
