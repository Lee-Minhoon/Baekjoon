#include<iostream>
#include<vector>

using namespace std;

const int MAX = 101;

vector<int> v[MAX];
bool visited[MAX];
int res = -1;

void DFS(int node)
{
    res++;
    visited[node] = true;
    size_t sz = v[node].size();

    for (size_t i = 0; i < sz; i++) {
        int next = v[node][i];
        if (!visited[next]) DFS(next);
    }

    return;
}

int main(void)
{
    int n, m; cin >> n >> m;

    while (m--) {
        int i, j; cin >> i >> j;
        v[i].push_back(j);
        v[j].push_back(i);
    }

    DFS(1);

    cout << res;

    return 0;
}