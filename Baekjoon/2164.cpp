#include<iostream>
#include<queue>

using namespace std;

int main(void)
{
    int n; cin >> n;
    queue<int> q;

    for (int i = 1; i <= n; i++) {
        q.push(i);
    }

    int len = q.size();
    while (len > 1) {
        q.pop();
        q.push(q.front());
        q.pop();
        len = q.size();
    }

    cout << q.front();

    return 0;
}