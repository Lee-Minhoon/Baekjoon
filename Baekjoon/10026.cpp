#include<iostream>
#include<queue>
#include<cstring>

#define py first
#define px second

using namespace std;

using PAIR = pair<int, int>;

const int MAX = 100;

int n;
string s[MAX];
bool visited[MAX][MAX];
queue<PAIR> q;
PAIR d[4] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} };
int res;

void visit(int y, int x)
{
    visited[y][x] = true;
    q.push(pair(y, x));
}

bool check(char c, char o, bool b)
{
    if (b) {
        if (c == 'R' && (o == 'R' || o == 'G')) return true;
    }
    else {
        if (c == 'R' && o == 'R') return true;
        if (c == 'G' && o == 'G') return true;
    }
    if (c == 'B' && o == 'B') return true;
    return false;
}

void search(bool b)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!visited[i][j]) {
                visit(i, j);
                while (!q.empty()) {
                    PAIR node = q.front();
                    q.pop();
                    for (int k = 0; k < 4; k++) {
                        int ny = node.py + d[k].py;
                        int nx = node.px + d[k].px;
                        if (ny >= 0 && nx >= 0 && ny < n && nx < n) {
                            if (!visited[ny][nx] && check(s[i][j], s[ny][nx], b)) visit(ny, nx);
                        }
                    }
                }
                res++;
            }
        }
    }
}

int main(void)
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    search(false);
    cout << res << ' ';

    memset(visited, false, sizeof(visited));
    res = 0;

    search(true);
    cout << res;
    
    return 0;
}