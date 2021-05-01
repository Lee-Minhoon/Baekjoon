#include<iostream>
#include<queue>

using namespace std;

const int MAX = 100;

int h, n, m;
int map[MAX][MAX][MAX];
struct Loc {
    int z, y, x, d;
    bool check() {
        if (z >= 0 && y >= 0 && x >= 0 && z < h && y < n && x < m) {
            if (map[z][y][x] == 0) return true;
        }
        return false;
    }
};
queue<Loc> q;
Loc Direction[6] = {
    {1, 0, 0},
    {-1, 0, 0},
    {0, 1, 0},
    {0, 0, 1},
    {0, -1, 0},
    {0, 0, -1}
};
int total, cnt, res;

void input(void)
{
    total = h * n * m;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < m; k++) {
                cin >> map[i][j][k];
                if (map[i][j][k] == 1) {
                    cnt++;
                    q.push({ i, j, k, 0 });
                }
                if (map[i][j][k] == -1) total--;
            }
        }
    }
}

void BFS()
{
    while (!q.empty()) {
        Loc node = q.front();
        q.pop();
        for (int i = 0; i < 6; i++) {
            int nz = node.z + Direction[i].z;
            int ny = node.y + Direction[i].y;
            int nx = node.x + Direction[i].x;
            int nd = node.d + Direction[i].d;
            Loc next = { nz, ny, nx, nd + 1 };
            if (next.check()) {
                cnt++;
                q.push(next);
                map[nz][ny][nx] = 1;
                res = max(res, next.d);
            }
        }
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> m >> n >> h;

    input();

    BFS();

    if (cnt == total) cout << res;
    else cout << -1;

    return 0;
}