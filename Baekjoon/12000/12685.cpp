#include<iostream>

using namespace std;

#define MAX 101
#define MAX_WEIGHT 100001

int DP[MAX][MAX_WEIGHT];

int main(void)
{
    int N, K; cin >> N >> K;

    for (int i = 1; i <= N; i++) {
        int W, V; cin >> W >> V;
        for (int j = 0; j <= K; j++) {
            if (j < W) {
                DP[i][j] = DP[i - 1][j];
            }
            else {
                DP[i][j] = max(DP[i - 1][j], DP[i - 1][j - W] + V);
            }
        }
    }

    cout << DP[N][K];

    return 0;
}