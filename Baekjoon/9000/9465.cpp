#include<iostream>

using namespace std;

#define MAX 100001

int DP[2][MAX];
int st[2][MAX];

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin >> t;

    for (int i = 0; i < t; i++) {
        int n; cin >> n;
        for (int j = 1; j <= n; j++) {
            cin >> st[0][j];
        }
        for (int j = 1; j <= n; j++) {
            cin >> st[1][j];
        }
        DP[0][1] = st[0][1];
        DP[1][1] = st[1][1];
        for (int j = 2; j <= n; j++) {
            DP[0][j] = max(DP[1][j - 1], DP[1][j - 2]) + st[0][j];
            DP[1][j] = max(DP[0][j - 1], DP[0][j - 2]) + st[1][j];
        }

        cout << max(DP[0][n], DP[1][n]) << '\n';
    }

    return 0;
}