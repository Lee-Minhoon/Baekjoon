#include<iostream>

using namespace std;

int main(void)
{
    int cnt[10] = { 0, };
    string s; cin >> s;
    int len = s.length();
    int sum = 0;

    for (int i = 0; i < len; i++) {
        cnt[s[i] - '0']++;
        sum += (s[i] - '0');
    }

    if (cnt[0] == 0 || sum % 3 != 0) cout << -1;
    else {
        for (int i = 9; i >= 0; i--) {
            for (int j = 0; j < cnt[i]; j++) {
                cout << i;
            }
        }
    }

    return 0;
}