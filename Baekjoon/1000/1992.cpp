#include<iostream>

using namespace std;

int n;
string s[64];

void quad(int x, int y, int len)
{
    if (len == 0) return;
    int value = 0;
    for (int i = y; i < y + len; i++) {
        for (int j = x; j < x + len; j++) {
            if (s[i][j] == '1') value++;
        }
    }
    if (value == len * len) {
        cout << "1";
        return;
    }
    else if (value == 0) {
        cout << "0";
        return;
    }
    else {
        int half = len / 2;
        cout << "(";
        quad(x, y, half);
        quad(x + half, y, half);
        quad(x, y + half, half);
        quad(x + half, y + half, half);
        cout << ")";
    }
    return;
}

int main(void)
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    quad(0, 0, n);

    return 0;
}