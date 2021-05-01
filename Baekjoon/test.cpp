#include<iostream>
#include<queue>

using namespace std;

const int MAX = 100;

struct Loc {
    int h, m, n;
    Loc(int h, int m, int n) : h(h), m(m), n(n) {}
};

int m, n, h;
int map[MAX][MAX][MAX];
bool visited[MAX][MAX][MAX];
queue<Loc> q;
Loc Direction[6] = {
    {1, 0, 0},
    {-1, 0, 0},
    {0, 1, 0},
    {0, 0, 1},
    {0, -1, 0},
    {0, 0, -1}
};

void input(void)
{
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < m; k++) {
                cin >> map[i][j][k];
                if (map[i][j][k] == 1) {
                    q.push({i, j, k});
                    visited[i][j][k] = true;
                }
            }
        }
    }
}


int main(void)
{
    cin >> m >> n >> h;

    cout << Direction[0].h << endl;

    return 0;
}