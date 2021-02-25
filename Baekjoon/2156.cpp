#include<iostream>

using namespace std;

#define MAX 10001

int DP[MAX][3];

int main(void)
{
    int n; cin >> n;

    for (int i = 1; i <= n; i++) {
        int temp; cin >> temp;
        if (i == 1) DP[i][1] = temp;
        else {
            int one = max(DP[i - 2][1], DP[i - 2][2]);
            int two = max(DP[i - 3][1], DP[i - 3][2]);
            DP[i][1] = max(one, two) + temp;
            DP[i][2] = DP[i - 1][1] + temp;
        }
    }

    int case1 = max(DP[n][1], max(DP[n][2], DP[n][3]));
    int case2 = max(DP[n - 1][1], max(DP[n - 1][2], DP[n - 1][3]));
    cout << max(case1, case2);

    return 0;
}