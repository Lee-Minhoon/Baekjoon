#include <iostream>

using namespace std;

int main(void)
{
    for (int i = 0; i < 3; i++) {
        string s; cin >> s;
        int cnt = 1, ans = 1;
        for (int j = 1; j < s.length(); j++) {
            if (s[j] == s[j - 1]) {
                cnt++;
                ans = max(ans, cnt);
            }
            else {
                cnt = 1;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}