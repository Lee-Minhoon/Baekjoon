#include<iostream>

using namespace std;

int main(void)
{
    string s; cin >> s;
    int len = s.length();

    int res = 0, tmp = 0;
    for (int i = 0; i < len; i++) {
        if (s[i] == '(') tmp++;
        else if (s[i] == ')' && s[i - 1] == '(') {
            tmp--;
            res += tmp;
        }
        else {
            tmp--;
            res += 1;
        }
    }

    cout << res;

    return 0;
}