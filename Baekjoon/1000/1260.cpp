#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<cstring>

using namespace std;

#define MAX 1001

int n, m, v;
vector<int> graph[MAX];
bool visited[MAX];
queue<int> q;

void DFS(int node)
{
    visited[node] = true;
    cout << node << ' ';
    size_t sz = graph[node].size();
    for (size_t i = 0; i < sz; i++) {
        int next = graph[node][i];
        if (visited[next]) continue;
        else DFS(next);
    }
}

void visit(int node)
{
    visited[node] = true;
    q.push(node);
    cout << node << ' ';
}

void BFS()
{
    visit(v);

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        size_t sz = graph[node].size();
        for (size_t i = 0; i < sz; i++) {
            int next = graph[node][i];
            if (visited[next]) continue;
            else visit(next);
        }
    }
}

int main(void)
{
    cin >> n >> m >> v;

    for (int i = 0; i < m; i++) {
        int v1, v2; cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }

    for (int i = 0; i < n + 1; i++) {
        sort(graph[i].begin(), graph[i].end());
    }

    DFS(v);

    cout << '\n';
    memset(visited, false, sizeof(visited));

    BFS();

    return 0;
}