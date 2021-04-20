#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int n, m;

int arr[20000001];

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int t; cin >> t;
        arr[t + 10000000]++;
    }

    int m; cin >> m;
    for (int i = 0; i < m; i++) {
        int t; cin >> t;
        if (arr[t + 10000000]) cout << 1 << ' ';
        else cout << 0 << ' ';
    }

    return 0;
}