#include<iostream>

using namespace std;

int DP[1001];

int main(void)
{
    DP[1] = 1;
    DP[2] = 2;

    int n; cin >> n;

    for (int i = 3; i <= n; i++) {
        DP[i] = (DP[i - 1] + DP[i - 2]) % 10007;
    }

    cout << DP[n];

    return 0;
}