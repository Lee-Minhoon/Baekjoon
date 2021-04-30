#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

const int MAX = 50;

int m, n, k;

int map[MAX][MAX];
bool visited[MAX][MAX];
pair<int, int> direction[4] = { {1, 0}, {0, 1}, {-1, 0}, {0, -1} };

int res;

void DFS(int y, int x)
{
    visited[y][x] = true;

    for (int i = 0; i < 4; i++) {
        int ny = y + direction[i].first;
        int nx = x + direction[i].second;
        if (ny >= 0 && nx >= 0 && ny < n && nx < m) {
            if (!visited[ny][nx] && map[ny][nx]) {
                DFS(ny, nx);
            }
        }
    }

    return;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin >> t;

    while (t--) {
        cin >> m >> n >> k;

        for (int i = 0; i < k; i++) {
            int x, y; cin >> x >> y;
            map[y][x] = 1;
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!visited[i][j] && map[i][j]) {
                    DFS(i, j);
                    res++;
                }
            }
        }

        cout << res << '\n';

        res = 0;
        memset(map, 0, sizeof(map));
        memset(visited, false, sizeof(visited));
    }

    return 0;
}