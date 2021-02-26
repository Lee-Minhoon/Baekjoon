#include<iostream>
#include<vector>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; cin >> n;
    int cnt[10001] = { 0, };

    for (int i = 0; i < n; i++) {
        int temp; cin >> temp;
        cnt[temp]++;
    }

    for (int i = 0; i < 10001; i++) {
        if (cnt[i] != 0) {
            for (int j = 0; j < cnt[i]; j++) {
                cout << i << "\n";
            }
        }
    }

    return 0;
}