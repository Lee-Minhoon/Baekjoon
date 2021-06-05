#include <iostream>

using namespace std;

int main(void)
{
    string s; cin >> s;
    bool flag = false;

    cout << s[0];
    for (auto i : s) {
        if (flag) {
            cout << i;
            flag = false;
        }
        if (i == '-') {
            flag = true;
        }
    }
    
    return 0;
}