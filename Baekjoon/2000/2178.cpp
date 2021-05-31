#include<iostream>
#include<queue>

using namespace std;

const int MAX = 100;

#define py first
#define px second

int n, m;
string maze[MAX];
bool visited[MAX][MAX];
queue<pair<int, int>> q;
pair<int, int> d[4] = { {-1, 0}, {0, 1}, {1, 0}, {0, -1} };
int res[MAX][MAX];

void visit(int y, int x)
{
    visited[y][x] = true;
    q.push(pair(y, x));
}

void BFS()
{
    visit(0, 0);

    while (!q.empty()) {
        pair<int, int> node = q.front();
        q.pop();
        for (int i = 0; i < 4; i++) {
            int ny = node.py + d[i].py;
            int nx = node.px + d[i].px;
            if (ny >= 0 && nx >= 0 && ny < n && nx < m) {
                if (!visited[ny][nx] && maze[ny][nx] != '0') {
                    visit(ny, nx);
                    res[ny][nx] = res[node.py][node.px] + 1;
                }
            }
        }
    }
}

int main(void)
{
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> maze[i];
    }

    BFS();

    if (n > 1 && m > 1) cout << res[n - 1][m - 1] + 1;

    return 0;
}