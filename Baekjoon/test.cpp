#include<iostream>

using namespace std;

int DP[100];

int fibonacci(int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (DP[n] != 0) return DP[n];
    return DP[n] = fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void)
{
    int n; cin >> n;

    cout << fibonacci(n);

    return 0;
}