#include<iostream>

using namespace std;

int n, rep;

void star(int y, int x, int num)
{
    int start = (n - num) * 2;
    int end = (rep - 1) - (n - num) * 2;
    if ((y == start || y == end) && x >= start && x <= end) cout << '*';
    else if ((x == start || x == end) && y >= start && y <= end) cout << '*';
    else {
        if (num == 1) cout << ' ';
        else star(y, x, num - 1);
    }
}

int main(void)
{
    cin >> n;
    rep = 1 + (n - 1) * 4;

    for (int i = 0; i < rep; i++) {
        for (int j = 0; j < rep; j++) {
            star(i, j, n);
        }
        cout << '\n';
    }

    return 0;
}