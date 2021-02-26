#include<iostream>

using namespace std;

#define MAX 101

long long DP[MAX];

long long triangle(int n)
{
    DP[1] = 1;
    DP[2] = 1;
    DP[3] = 1;
    DP[4] = 2;
    DP[5] = 2;
    for (int i = 6; i <= n; i++) {
        DP[i] = DP[i - 1] + DP[i - 5];
    }
    return DP[n];
}

int main(void)
{
    int T; cin >> T;
    
    for (int i = 0; i < T; i++) {
        int temp; cin >> temp;
        cout << triangle(temp) << "\n";
    }

    return 0;
}