#include<iostream>
#include<cmath>

using namespace std;

const int MAX = 2187;

int n;
int paper[MAX][MAX];
int cnt[3];

void dv(int x, int y, int len)
{
    if (len == 0) return;
    int value[3] = { 0, };
    for (int i = y; i < y + len; i++) {
        for (int j = x; j < x + len; j++) {
            if (paper[i][j] == -1) value[0]++;
            else if (paper[i][j] == 0) value[1]++;
            else value[2]++;
        }
    }
    for (int i = 0; i < 3; i++) {
        if (value[i] == len * len) {
            cnt[i]++;
            return;
        }
    }
    int next = len / 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            dv(x + next * i, y + next * j, next);
        }
    }
    return;
}

int main(void)
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j ++) {
            cin >> paper[i][j];
        }
    }

    dv(0, 0, n);

    for (int i = 0; i < 3; i++) {
        cout << cnt[i] << endl;
    }

    return 0;
}