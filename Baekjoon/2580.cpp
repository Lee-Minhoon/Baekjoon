#include<iostream>
#include<vector>

using namespace std;

#define SIZE 10

int board[SIZE][SIZE];
bool complete = false;
vector<pair<int, int>>zero;
int blanks = 0;

bool isPossible(int row, int col, int num)
{
    for (int i = 1; i < SIZE; i++) {
        if (board[row][i] == num && board[row][i] != 0) return false;
        if (board[i][col] == num && board[i][col] != 0) return false;
    }
    int r = ((row - 1) / 3) * 3 + 1;
    int c = ((col - 1) / 3) * 3 + 1;
    for (int i = r; i < r + 3; i++) {
        for (int j = c; j < c + 3; j++) {
            if (board[i][j] == num && board[i][j] != 0) return false;
        }
    }
    return true;
}

void sudoku(int cnt)
{
    int row, col;
    if (cnt == blanks) {
        complete = true;
        return;
    }
    row = zero[cnt].first;
    col = zero[cnt].second;
    for (int num = 1; num < SIZE; num++) {
        if (isPossible(row, col, num)) {
            board[row][col] = num;
            sudoku(cnt + 1);
            if (complete) return;
        }
    }
    board[row][col] = 0;
    return;
}

int main(void)
{
    for (int i = 1; i < SIZE; i++) {
        for (int j = 1; j < SIZE; j++) {
            cin >> board[i][j];
            if (board[i][j] == 0) {
                zero.push_back(pair(i, j));
            }
        }
    }

    blanks = zero.size();

    sudoku(0);

    for (int i = 1; i < SIZE; i++) {
        for (int j = 1; j < SIZE; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}