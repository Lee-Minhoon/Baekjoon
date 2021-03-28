#include<iostream>

using namespace std;

const int MOD = 1000000007;
const int MAX = 2;

using ll = long long;
using Matrix = struct {
    ll mat[MAX][MAX];
};

ll n, b;

Matrix operator*(const Matrix& a, const Matrix& b)
{
    Matrix tmp;
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            tmp.mat[i][j] = 0;
            for (int k = 0; k < MAX; k++) {
                tmp.mat[i][j] += a.mat[i][k] * b.mat[k][j];
            }
            tmp.mat[i][j] %= MOD;
        }
    }
    return tmp;
}

Matrix power(const Matrix& m, ll num)
{
    if (num == 1) return m;
    if (num % 2 != 0) {
        return power(m, num - 1) * m;
    }
    Matrix half = power(m, num / 2);
    return half * half;
}

int main(void)
{
    cin >> n;

    Matrix m;
    m.mat[0][0] = 1;
    m.mat[0][1] = 1;
    m.mat[1][0] = 1;
    m.mat[1][1] = 0;

    m = power(m, n);
    
    cout << m.mat[0][1] % MOD;

    return 0;
}