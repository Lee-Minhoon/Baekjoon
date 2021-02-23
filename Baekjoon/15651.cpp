#include<iostream>
#include<vector>

using namespace std;

#define SIZE 9

int n, m;
int res[SIZE];

void dfs(int cnt)
{
    if (cnt == m) {
        for (int i = 0; i < m; i++) cout << res[i] << " ";
        cout << "\n";
        return;
    }
    for (int i = 1; i <= n; i++) {
        res[cnt] = i;
        dfs(cnt + 1);
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    dfs(0);

    return 0;
}