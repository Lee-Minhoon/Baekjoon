#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> analyze(string s)
{
    vector<int> ret;
    for (int i = 0; i < 4; i++) {
        ret.push_back(0);
    }

    for (auto i : s) {
        if (i >= 97 && i <= 122) {
            ret[0]++;
        }
        else if (i >= 65 && i <= 90) {
            ret[1]++;
        }
        else if (i >= 48 && i <= 57) {
            ret[2]++;
        }
        else {
            ret[3]++;
        }
    }

    return ret;
}

int main(void)
{
    string s; getline(cin, s);
    while (s.length() != 0) {
        vector<int> ans = analyze(s);
        for (auto j : ans) {
            cout << j << ' ';
        }
        cout << '\n';
        getline(cin, s);
    }

    return 0;
}