#include<iostream>

using namespace std;
using LL = long long;

LL func(LL n, LL d)
{
    LL ret = 0;
    for (LL i = d; i <= n; i *= d) {
        ret += n / i;
    }
    return ret;
}

int main(void)
{
    LL n, m; cin >> n >> m;

    LL temp1 = func(n, 5) - (func(n - m, 5) + func(m, 5));
    LL temp2 = func(n, 2) - (func(n - m, 2) + func(m, 2));
    LL res = min(temp1, temp2);
    cout << res;

    return 0;
}