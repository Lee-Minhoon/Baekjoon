#include<iostream>

using namespace std;

#define MAX 501

int DP[MAX][MAX];

int main(void)
{
    int n; cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            int temp; cin >> temp;
            if (j == 1) DP[i][j] = temp + DP[i - 1][j];
            else if (j == i) DP[i][j] = temp + DP[i - 1][j - 1];
            else DP[i][j] = temp + max(DP[i - 1][j], DP[i - 1][j - 1]);
        }
    }

    int max = 0;
    for (int i = 1; i <= n; i++) {
        if (DP[n][i] > max) max = DP[n][i];
    }

    cout << max;

    return 0;
}