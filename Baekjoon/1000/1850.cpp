#include<iostream>

using namespace std;

using LL = long long;

LL gcd(LL a, LL b)
{
    return b ? gcd(b, a % b) : a;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    LL a, b; cin >> a >> b;

    cout << string(gcd(a, b), '1');

    return 0;
}