#include <iostream>

using namespace std;

int main(void)
{
    int T; cin >> T;

    while (T--) {
        int cnt[10] = { 0, };
        int temp; cin >> temp;
        while (temp > 0) {
            cnt[temp % 10]++;
            temp /= 10;
        }
        int ans = 0;
        for (auto i : cnt) {
            if (i) {
                ans += 1;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}