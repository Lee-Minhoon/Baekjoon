#include<iostream>

using namespace std;

#define MAX 101

int DP[MAX][MAX];

typedef struct _Contest {
    int start;
    int end;
    int value;
} Contest;

int main(void)
{
    int t; cin >> t;

    Contest c[MAX];

    int max_days = 0;
    for (int i = 1; i <= t; i++) {
        cin >> c[i].start >> c[i].end >> c[i].value;
        max_days = max(max_days, c[i].end);
    }

    for (int i = 1; i <= t; i++) {
        cout << c[i].start << ' ' << c[i].end << ' ' << c[i].value << endl;
    }

    for (int i = 1; i <= t; i++) {
        for (int j = 1; j <= max_days; j++) {
            if (j < c[i].end) DP[i][j] = DP[i - 1][j];
            else DP[i][j] = max(DP[i - 1][j], DP[i - 1][c[i].start - 1] + c[i].value);
        }
    }

    for (int i = 1; i <= max_days; i++) {
        for (int j = 1; j <= max_days; j++) {
            cout << DP[i][j] << ' ';
        }
        cout << endl;
    }

    cout << DP[t][max_days];

    return 0;
}