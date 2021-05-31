#include<iostream>
#include<queue>

using namespace std;

const int MAX = 1000;
const int INF = 1000000;

int n, m;
string arr[MAX];
bool visited[MAX][MAX][2];
struct Map {
    int y, x, cnt;
    bool chance;
    bool check() {
        if (y >= 0 && x >= 0 && y < n && x < m) {
            if (!visited[y][x][chance]) {
                if (arr[y][x] == '0') return true;
                else if (arr[y][x] == '1' && !chance) return true;
            }
        }
        return false;
    }
};
queue<Map> q;
int direction[4][2] = {
    {1, 0}, {0, 1}, {-1, 0}, {0, -1}
};

int BFS()
{
    int res = INF;
    if (n == 1 && m == 1) return 1;
    q.push({ 0, 0, 1, false });
    visited[0][0][0] = true;
    while (!q.empty()) {
        Map node = q.front();
        q.pop();
        for (int i = 0; i < 4; i++) {
            int ny = node.y + direction[i][0];
            int nx = node.x + direction[i][1];
            Map next = { ny, nx, node.cnt + 1, node.chance };
            if (next.check()) {
                if (arr[ny][nx] == '1') next.chance = true;
                q.push(next);
                visited[ny][nx][next.chance] = true;
                if (ny == n - 1 && nx == m - 1) res = min(res, next.cnt);
            }
        }
    }
    return res;
}

int main(void)
{
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int res = BFS();
    if (res != INF) cout << res;
    else cout << -1;

    return 0;
}