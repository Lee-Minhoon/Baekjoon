#include<iostream>

using namespace std;

#define MAX 1001

int seq[MAX];
int DP[MAX][2];
int res;

int main(void)
{
    int N; cin >> N;

    for (int i = 1; i <= N; i++) {
        cin >> seq[i];
    }

    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < i; j++) {
            if (seq[i] > seq[j]) {
                DP[i][0] = max(DP[i][0], DP[j][0] + 1);
            }
        }
    }

    for (int i = N; i >= 1; i--) {
        for (int j = N + 1; j > i; j--) {
            if (seq[i] > seq[j]) {
                DP[i][1] = max(DP[i][1], DP[j][1] + 1);
            }
        }
    }

    for (int i = 1; i <= N; i++) {
        if (res < DP[i][0] + DP[i][1]) {
            res = DP[i][0] + DP[i][1];
        }
    }

    cout << res - 1;

    return 0;
}