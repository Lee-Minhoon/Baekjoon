#include<iostream>
#include<vector>

using namespace std;

const int MAX = 501;

vector<int> DP(MAX, -1);

int cnt(int n)
{
    if (DP[n] != -1) {
        return DP[n];
    }
    if (n % 5 == 0) {
        return DP[n] = cnt(n / 5) + 1;
    }
    else {
        return 0;
    }
}

int main(void)
{
    int n; cin >> n;

    int res = 0;
    for (int i = 1; i <= n; i++) {
        res += cnt(i);
    }
    cout << res;
    
    return 0;
}