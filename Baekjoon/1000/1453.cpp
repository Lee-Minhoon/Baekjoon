#include <iostream>

using namespace std;

int main(void)
{
    bool cnt[101] = { false, };
    int ans = 0;
    int N; cin >> N;

    while (N--) {
        int temp; cin >> temp;
        if (cnt[temp]) {
            ans++;
        }
        else {
            cnt[temp] = true;
        }
    }

    cout << ans << '\n';

    return 0;
}