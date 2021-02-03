#include<iostream>

using namespace std;

string wb[8] = {
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW"
};

string bw[8] = {
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB"
};

int compare(string* board, int n, int m)
{
    int res = 2500;
    for (int i = 0; i < n - 7; i++) {
        for (int j = 0; j < m - 7; j++) {
            int res_wb = 0;
            int res_bw = 0;
            for (int k = 0; k < 8; k++) {
                for (int l = 0; l < 8; l++) {
                    if (board[k + i][l + j] != wb[k][l]) {
                        res_wb++;
                    }
                    if (board[k + i][l + j] != bw[k][l]) {
                        res_bw++;
                    }
                }
            }
            if (res_wb < res) {
                res = res_wb;
            }
            if (res_bw < res) {
                res = res_bw;
            }
        }
    }
    return res;
}

int main(void)
{
    int n, m; cin >> n >> m;
    string* board = new string[n];

    for (int i = 0; i < n; i++) {
        cin >> board[i];
    }

    cout << compare(board, n, m);

    return 0;
}