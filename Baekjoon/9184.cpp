#include<iostream>

using namespace std;

#define MAX 21

int DP[MAX][MAX][MAX];

int w(int a, int b, int c)
{
    if (a <= 0 || b <= 0 || c <= 0) return 1;
    if (a > 20 || b > 20 || c > 20) return w(20, 20, 20);
    if (DP[a][b][c]) return DP[a][b][c];
    if (a < b && b < c) DP[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
    else DP[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
    return DP[a][b][c];
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c; cin >> a >> b >> c;

    while (a != -1 || b != -1 || c != -1) {
        cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a, b, c) << "\n";
        cin >> a >> b >> c;
    }

    return 0;
}