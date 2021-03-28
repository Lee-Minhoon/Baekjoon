#include<iostream>

using namespace std;

#define MAX 100001

int DP[MAX];

int main(void)
{
    int n; cin >> n;
    int res = -1000;
    
    DP[0] = -1000;
    for (int i = 1; i <= n; i++) {
        int temp; cin >> temp;
        DP[i] = max(temp, DP[i - 1] + temp);
        if (DP[i] > res) {
            res = DP[i];
        }
    }

    cout << res;

    return 0;
}