#include<iostream>

using namespace std;

#define SIZE 21

int S[SIZE][SIZE];
int N;
bool M[SIZE];
int res = 1000000000;

void synergy()
{
    int team1 = 0;
    int team2 = 0;
    for (int i = 1; i < N; i++) {
        for (int j = 1; j < N; j++) {
            if (M[i] && M[i] == M[j]) team1 += S[i][j];
            else if (!M[i] && M[i] == M[j]) team2 += S[i][j];
        }
    }
    if (abs(team1 - team2) < res) {
        res = abs(team1 - team2);
    }
}

void dfs(int cnt, int number)
{
    if (cnt == N / 2) {
        synergy();
        return;
    }
    for (int i = number; i < N; i++) {
        M[i] = true;
        dfs(cnt + 1, i + 1);
        M[i] = false;
    }
}

int main(void)
{
    cin >> N;
    N++;

    for (int i = 1; i < N; i++) {
        for (int j = 1; j < N; j++) {
            cin >> S[i][j];
        }
    }

    dfs(0, 1);

    cout << res;

    return 0;
}