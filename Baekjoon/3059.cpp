#include <iostream>

using namespace std;

int main(void)
{
    int T; cin >> T;
    
    while (T--) {
        bool check[26] = { false };
        int ans = 0;
        string s; cin >> s;

        for (auto i : s) {
            check[i - 65] = true;
        }


        for (int i = 0; i < 26; i++) {
            if (!check[i]) {
                ans += i + 65;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}