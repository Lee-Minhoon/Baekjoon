#include<iostream>

using namespace std;

long long power(int A, int B, int C)
{
    if (B == 1) return A % C;

    long long tmp = power(A, B / 2, C);

    return B % 2 ? (tmp * tmp % C) * A % C : tmp * tmp % C;
}

int main(void)
{
    long long A, B, C; cin >> A >> B >> C;

    cout << power(A, B, C) << endl;

    return 0;
}