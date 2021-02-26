#include<iostream>

using namespace std;

#define MAX 1001

int N;
int price[MAX][4];
int DP[MAX][4];

int RGB(void)
{
    for (int i = 1; i <= 3; i++) {
        DP[1][i] = price[1][i];
    }
    for (int i = 2; i <= N; i++) {
        for (int j = 1; j <= 3; j++) {
            DP[i][j] = price[i][j] + min(DP[i - 1][j % 3 + 1], DP[i - 1][(j + 1) % 3 + 1]);
        }
    }
    return min(DP[N][1], min(DP[N][2], DP[N][3]));
}

int main(void)
{
    cin >> N;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= 3; j++) {
            cin >> price[i][j];
        }
    }

    cout << RGB() << endl;

    return 0;
}