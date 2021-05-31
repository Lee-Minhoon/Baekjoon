#include<iostream>
#include<queue>
#include<algorithm>

#define py first
#define px second

using namespace std;

const int MAX = 25;

int n;
string arr[MAX];
bool visited[MAX][MAX];
queue <pair<int, int>> q;
pair<int, int> d[4] = { {-1, 0}, {0, 1}, {1, 0}, {0, -1} };
int cnt;
vector<int> res;

void visit(int y, int x)
{
    visited[y][x] = true;
    q.push(pair(y, x));
    cnt++;
}

void BFS()
{
    for (int y = 0; y < n; y++) {
        for (int x = 0; x < n; x++) {
            if (arr[y][x] == '1' && !visited[y][x]) {
                visit(y, x);
                while (!q.empty()) {
                    pair<int, int> node = q.front();
                    q.pop();
                    for (int i = 0; i < 4; i++) {
                        int ny = node.py + d[i].py;
                        int nx = node.px + d[i].px;
                        if (ny >= 0 && nx >= 0 && ny < n && nx < n) {
                            if (!visited[ny][nx]) {
                                if (arr[ny][nx] == '1') visit(ny, nx);
                                else visited[ny][nx] = true;
                            }
                        }
                    }
                }
                res.push_back(cnt);
                cnt = 0;
            }
        }
    }
}

int main(void)
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    BFS();

    sort(res.begin(), res.end());
    size_t sz = res.size();
    cout << sz << '\n';
    for (size_t i = 0; i < sz; i++) {
        cout << res[i] << '\n';
    }
    
    return 0;
}