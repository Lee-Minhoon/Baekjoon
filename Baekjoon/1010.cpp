#include<iostream>

using namespace std;

#define MAX 31

long long DP[MAX][MAX];

void binomial()
{
    DP[0][0] = 1;
    for (int i = 1; i < MAX; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) DP[i][j] = 1;
            else {
                DP[i][j] = (DP[i - 1][j - 1] + DP[i - 1][j]);
            }
        }
    }
}

int main(void)
{
    binomial();

    int t, n, m;

    cin >> t;
    
    while (t--) {
        cin >> n >> m;
        cout << DP[m][n] << endl;
    }


    return 0;
}