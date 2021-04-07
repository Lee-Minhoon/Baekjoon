#include<iostream>

using namespace std;

int main(void)
{
    int n; cin >> n;
    n = 1000 - n;
    int changes[6] = { 500, 100, 50, 10, 5, 1 };
    int res = 0;

    for (int i = 0; i < 6; i++) {
        int tmp = n / changes[i];
        n -= (tmp * changes[i]);
        res += tmp;
        if (n == 0) break;
    }

    cout << res;

    return 0;
}