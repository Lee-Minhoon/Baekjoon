#include<iostream>
#include<queue>

using namespace std;

const int MAX = 100001;

int n, k;
queue<int> q;
int depth[MAX];

int move(int n, int way)
{
    if (way == 0) return n - 1;
    else if (way == 1) return n + 1;
    else return n * 2;
}

bool check(int n)
{
    if (n >= 0 && n <= 100000) {
        if (depth[n] == 0) return true;
    }
    return false;
}

void BFS()
{
    q.push(n);
    depth[n] = 1;
    while(!q.empty()) {
        int pre = q.front();
        q.pop();
        for (int i = 0; i < 3; i++) {
            int next = move(pre, i);
            if (check(next)) {
                q.push(next);
                depth[next] = depth[pre] + 1;
                if (next == k) return;
            }
        }
    }
}

int main(void)
{
    cin >> n >> k;

    BFS();

    cout << depth[k] - 1;

    return 0;
}