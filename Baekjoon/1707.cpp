#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

#define visited first
#define color second

using namespace std;

const int MAX = 20001;

pair<bool, bool> p[MAX];

bool BFS(const vector<int>* graph, int num)
{
    queue<int> q;
    q.push(num);
    p[num].visited = true;

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        size_t sz = graph[node].size();
        for (size_t i = 0; i < sz; i++) {
            int next = graph[node][i];
            if (p[next].visited) {
                if (p[next].color == p[node].color) return false;
            }
            else {
                q.push(next);
                p[next].visited = true;
                p[next].color = !p[node].color;
            }
        }
    }

    return true;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int k; cin >> k;

    while (k--) {
        int v, e; cin >> v >> e;
        vector<int> graph[MAX];

        while (e--) {
            int a, b; cin >> a >> b;
            graph[a].push_back(b);
            graph[b].push_back(a);
        }

        bool ret = true;
        for (int i = 1; i <= v; i++) {
            if (!p[i].visited && ret) ret = BFS(graph, i);
        }
        if (ret) cout << "YES\n";
        else cout << "NO\n";

        fill(p, p + MAX, pair(false, false));
    }

    return 0;
}