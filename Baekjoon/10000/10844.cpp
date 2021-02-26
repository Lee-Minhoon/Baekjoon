#include<iostream>

using namespace std;

#define MAX 101

long long DP[MAX][10];

int main(void)
{
    int N; cin >> N;

    for (int i = 1; i <= 9; i++) {
        DP[1][i] = 1;
    }
    for (int i = 2; i <= N; i++) {
        for (int j = 0; j <= 9; j++) {
            if (j == 0) DP[i][j] += DP[i - 1][1] % 1000000000;
            else if (j == 9) DP[i][j] += DP[i - 1][8] % 1000000000;
            else {
                DP[i][j] += DP[i - 1][j - 1] % 1000000000;
                DP[i][j] += DP[i - 1][j + 1] % 1000000000;
            }
        }
    }

    long long sum = 0;
    for (int i = 0; i <= 9; i++) {
        sum += DP[N][i];
    }

    cout << sum % 1000000000;

    return 0;
}