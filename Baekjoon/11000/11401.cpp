#include<iostream>

using namespace std;

const int MOD = 1000000007;

long long fact(int s, int n)
{
    long long tmp = 1;

    for (int i = s; i <= n; i++) {
        tmp = tmp * i % MOD;
    }

    return tmp;
}

long long power(int a, int b)
{
    if (b == 1) return a % MOD;

    long long tmp = power(a, b / 2);

    return b % 2 ? (tmp * tmp % MOD) * a % MOD : tmp * tmp % MOD;
}

int main(void)
{
    int n, k; cin >> n >> k;

    cout << fact(n - k + 1, n) * power(fact(1, k), MOD - 2) % MOD;

    return 0;
}