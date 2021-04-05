#include<iostream>

using namespace std;

int DP[12];

int main(void)
{
    DP[1] = 1;
    DP[2] = 2;
    DP[3] = 4;

    for (int i = 4; i < 12; i++) {
        DP[i] = DP[i - 1] + DP[i - 2] + DP[i - 3];
    }

    int t; cin >> t;

    for (int i = 0; i < t; i++) {
        int n; cin >> n;
        cout << DP[n] << '\n';
    }

    return 0;
}