#include<iostream>

using namespace std;

#define MAX 1001

int DP[MAX][MAX];

void binomial()
{
    DP[0][0] = 1;
    for (int i = 1; i < MAX; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) DP[i][j] = 1;
            else {
                DP[i][j] = (DP[i - 1][j - 1] + DP[i - 1][j]) % 10007;
            }
        }
    }
}

int main(void)
{
    int n, k; cin >> n >> k;

    binomial();

    cout << DP[n][k];

    return 0;
}