#include<iostream>

using namespace std;

#define MAX 1000001

int DP[MAX];

int tile(int n)
{
    for (int i = 0; i < 3; i++) DP[i] = i;
    for (int i = 3; i <= n; i++) DP[i] = (DP[i - 1] + DP[i - 2]) % 15746;
    return DP[n];
}

int main(void)
{
    int n; cin >> n;

    cout << tile(n) << endl;

    return 0;
}