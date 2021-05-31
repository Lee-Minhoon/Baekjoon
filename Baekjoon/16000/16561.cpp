#include<iostream>

using namespace std;

int main(void)
{
    int n; cin >> n;

    n = n / 3 - 2;

    int res = 0;

    for (int i = 1; i <= n; i++) {
        res += i;
    }

    cout << res;

    return 0;
}