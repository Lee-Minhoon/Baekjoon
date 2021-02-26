#include<iostream>

using namespace std;

#define MAX 301

int DP[MAX][3];

int main(void)
{
    int n; cin >> n;
    
    for (int i = 1; i <= n; i++) {
        int temp; cin >> temp;
        if (i == 1) DP[1][1] = temp;
        else if (i == 2) {
            DP[2][1] = DP[1][1] + temp;
            DP[2][2] = temp;
        }
        else {
            DP[i][1] = DP[i - 1][2] + temp;
            DP[i][2] = max(DP[i - 2][1], DP[i - 2][2]) + temp;
        }
    }

    cout << max(DP[n][1], DP[n][2]);

    return 0;
}