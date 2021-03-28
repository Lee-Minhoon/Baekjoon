#include<iostream>
#include<deque>
#include<vector>

using namespace std;

deque<int> dq;
int res;

void moveLeft(int cnt)
{
    for (int i = 0; i < cnt; i++) {
        dq.push_back(dq.front());
        dq.pop_front();
        res++;
    }
}

void moveRight(int cnt)
{
    for (int i = 0; i < cnt; i++) {
        dq.push_front(dq.back());
        dq.pop_back();
        res++;
    }
}

int main(void)
{
    int n, m; cin >> n >> m;
    int front = 0;
    int rear = n - 1;

    for (int i = 1; i <= n; i++) {
        dq.push_back(i);
    }
    for (int i = 0; i < m; i++) {
        int tmp; cin >> tmp;
        for (deque<int>::iterator iter = dq.begin(); iter < dq.end(); iter++) {
            if (tmp == *iter) {
                int f_dis = abs(iter - dq.begin());
                int r_dis = abs(iter - dq.end());
                f_dis <= r_dis ? moveLeft(f_dis) : moveRight(r_dis);
                dq.pop_front();
                break;
            }
        }
    }
    cout << res;

    return 0;
}