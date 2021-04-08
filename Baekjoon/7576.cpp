#include<iostream>
#include<queue>

#define py first
#define px second

using namespace std;

const int MAX = 1000;

using PAIR = pair<int, int>;

int n, m;
int tomato[MAX][MAX];
queue<PAIR> q;
vector<PAIR> v;
PAIR d[4] = { {-1, 0}, {0, 1}, {1, 0}, {0, -1} };
int cnt[MAX][MAX];
int total, chk, res;

void visit(int y, int x)
{
    tomato[y][x] = 1;
    q.push(pair(y, x));
    chk++;
}

void BFS()
{
    size_t sz = v.size();
    
    for (size_t i = 0; i < sz; i++) {
        visit(v[i].py, v[i].px);
    }

    while (!q.empty()) {
        PAIR node = q.front();
        q.pop();
        for (int i = 0; i < 4; i++) {
            int ny = node.py + d[i].py;
            int nx = node.px + d[i].px;
            if (ny >= 0 && nx >= 0 && ny < m && nx < n) {
                if (tomato[ny][nx] != 1 && tomato[ny][nx] != -1) {
                    visit(ny, nx);
                    cnt[ny][nx] = cnt[node.py][node.px] + 1;
                    res = max(res, cnt[ny][nx]);
                }
            }
        }
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> tomato[i][j];
            if (tomato[i][j] == 1) v.push_back(pair(i, j));
            if (tomato[i][j] != -1) total++;
        }
    }

    BFS();

    if (chk == total) cout << res;
    else cout << -1;

    return 0;
}