#include<iostream>
#include<queue>
#include<cstring>

#define py first
#define px second

using namespace std;

using PAIR = pair<int, int>;

const int MAX = 300;

int cnt[MAX][MAX];
queue<PAIR> q;
PAIR src, dst;
PAIR d[8] = {
    {-1, -2}, {-2, -1}, {-2, 1}, {-1, 2},
    {1, 2}, {2, 1}, {2, -1}, {1, -2}
};


void search(int len)
{
    cnt[src.py][src.px] = 1;
    q.push(src);

    while (!q.empty()) {
        PAIR node = q.front();
        q.pop();
        for (int i = 0; i < 8; i++) {
            int ny = node.py + d[i].py;
            int nx = node.px + d[i].px;
            if (ny >= 0 && nx >= 0 && ny < len && nx < len) {
                if (!cnt[ny][nx]) {
                    cnt[ny][nx] = cnt[node.py][node.px] + 1;
                    q.push(pair(ny, nx));
                }
            }
        }
    }
}

int main(void)
{
    int n; cin >> n;

    while (n--) {
        int l; cin >> l;
        cin >> src.py >> src.px;
        cin >> dst.py >> dst.px;

        memset(cnt, 0, sizeof(cnt));

        search(l);

        cout << cnt[dst.py][dst.px] - 1 << '\n';
    }

    return 0;
}