#include<iostream>

using namespace std;

const int MOD = 1000;
const int MAX = 5;

using ll = long long;
using Matrix = struct {
    int mat[MAX][MAX];
};

ll n, b;

void io(Matrix& m, char c)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (c == 'i') cin >> m.mat[i][j];
            else cout << m.mat[i][j] % MOD << " ";
        }
        if (c == 'o') cout << "\n";
    }
}

Matrix operator*(const Matrix& a, const Matrix& b)
{
    Matrix tmp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            tmp.mat[i][j] = 0;
            for (int k = 0; k < n; k++) {
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
    cin >> n >> b;

    Matrix m;

    io(m, 'i');
    m = power(m, b);
    io(m, 'o');

    return 0;
}