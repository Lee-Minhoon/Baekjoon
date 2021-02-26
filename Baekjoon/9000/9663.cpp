#include<iostream>
#include<vector>

using namespace std;

#define SIZE 15

int n;
int res;
int cols[SIZE];

bool check(int row, int col)
{
    for (int i = 1; i < row; i++) {
        if (cols[i] == col || abs(i - row) == abs(cols[i] - col)) {
            return false;
        }
    }
    return true;
}

void dfs(int row)
{
    
    if (row == n + 1) {
        res++;
        return;
    }
    for (int col = 1; col <= n; col++) {
        cols[row] = col;
        if (check(row, col)) {
            dfs(row + 1);
        }
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    dfs(1);

    cout << res;

    return 0;
}