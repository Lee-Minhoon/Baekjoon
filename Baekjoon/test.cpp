#include<iostream>
#include<queue>

using namespace std;

const int MAX = 101;

int n, m;
int net[MAX][MAX];
int d[MAX][MAX];
queue<int> q;
int res = 101;
int test;

/*
void BFS(int a, int b)
{
    if (net[a][b]) return;
    q = queue<int>();
    q.push(a);
    while (!q.empty()) {
        int user = q.front();
        q.pop();
        for (int i = 1; i <= n; i++) {
            if (i != a && net[user][i]) {
                q.push(i);
                if (!net[a][i]) {
                    net[a][i] = net[user][i] + 1;
                    net[i][a] = net[a][i];
                }
                if (i == b) return;
            }
        }
    }
}
*/

int main(void)
{
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        net[a][b] = 1;
        net[b][a] = 1;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i != j && net[i][j] != 1) {
                net[i][j] = 10000000;
                test++;
            }
            d[i][j] = net[i][j];
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            for (int k = 1; k <= n; k++) {
                if (d[j][i] + d[i][k] < d[j][k]) {
                    d[j][k] = d[j][i] + d[i][k];
                    test++;
                }
            }
        }
        for (int j = 1; j <= n; j++) {
            for (int k = 1; k <= n; k++) {
                cout << d[i][j] << ' ';
            }
        }
    }

    /*
    for (int i = 1; i <= n; i++) {
        int tmp = 0;
        for (int j = 1; j <= n; j++) {
            if (i != j) {
                BFS(i, j);
                tmp += net[i][j];
            }
        }
        res = min(res, tmp);
    }
    */

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << d[i][j] << ' ';
        }
        cout << endl;
    }

    cout << res;

    cout << endl;
    cout << test;

    return 0;
}