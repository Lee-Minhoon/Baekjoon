#include<iostream>
#include<vector>

using namespace std;

#define SIZE 9

int n, m;
int res[SIZE];
bool visited[SIZE];

void dfs(int num, int cnt)
{
    if (cnt == m) {
        for (int i = 0; i < m; i++) cout << res[i] << " ";
        cout << "\n";
        return;
    }
    for (int i = num; i <= n; i++) {
        if (!visited[i]) {
            visited[i] = true;
            res[cnt] = i;
            dfs(i + 1, cnt + 1);
            visited[i] = false;
        }
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    dfs(1, 0);

    return 0;
}