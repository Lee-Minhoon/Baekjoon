#include<iostream>

using namespace std;

int paper[128][128];
int n, white, blue;

void quad(int x, int y, int len)
{
    if (len == 0) return;
    int color = 0;
    for (int i = y; i < y + len; i++) {
        for (int j = x; j < x + len; j++) {
            if (paper[i][j] == 1) color++;
        }
    }
    if (color == len * len) {
        blue++;
        return;
    }
    else if (color == 0) {
        white++;
        return;
    }
    else {
        int half = len / 2;
        quad(x, y, half);
        quad(x + half, y, half);
        quad(x, y + half, half);
        quad(x + half, y + half, half);
    }
    return;
}

int main(void)
{
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> paper[i][j];
        }
    }

    quad(0, 0, n);
    cout << white << "\n" << blue;

    return 0;
}