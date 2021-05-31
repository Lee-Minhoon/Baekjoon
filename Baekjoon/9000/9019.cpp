#include<iostream>
#include<vector>
#include<queue>
#include<cstring>

using namespace std;

const int MAX = 10000;

char command[4] = { 'D','S','L','R' };

bool visited[MAX];
pair<int, int> cmd[MAX];

int DSLR(int a, int t)
{
    if (t == 0) return a * 2 % 10000;
    else if (t == 1) {
        if (a >= 1) return a - 1;
        else return 9999;
    }
    else {
        vector<int> v(4);
        int idx = 0;
        while (a > 0) {
            v[idx++] = a % 10;
            a /= 10;
        }
        if (t == 2) return v[2] * 1000 + v[1] * 100 + v[0] * 10 + v[3];
        else return v[0] * 1000 + v[3] * 100 + v[2] * 10 + v[1];
    }
}

void BFS(int a, int b)
{
    queue<int> q;
    q.push(a);
    visited[a] = true;
    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        for (int i = 0; i <= 3; i++) {
            int next = DSLR(cur, i);
            if (!visited[next]) {
                q.push(next);
                visited[next] = true;
                cmd[next] = pair(cur, i);
                if (next == b) return;
            }
        }
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin >> t;

    while (t--) {
        int a, b; cin >> a >> b;
        BFS(a, b);
        int node = b;
        vector<int> cmds;
        while (node != a) {
            cmds.push_back(cmd[node].second);
            node = cmd[node].first;
        }
        for (auto i = cmds.rbegin(); i < cmds.rend(); i++) {
            cout << command[*i];
        }
        cout << '\n';
        memset(visited, false, sizeof(visited));
    }

    return 0;
}