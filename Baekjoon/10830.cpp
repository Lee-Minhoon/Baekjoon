#include<iostream>

using namespace std;

const int MAX = 5;

int n, b;
int mat[MAX][MAX];

typedef int Matrix[MAX][MAX];

Matrix mult(Matrix A, Matrix B)
{
    Matrix tmp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                tmp.mat[i][j] = A.mat[i][k] * B.mat[k][j];
            }
        }
    }
    return tmp;
}

Matrix power(Matrix m, int num)
{
    if (num == 1) return m;
    if (num % 2 != 0) {
        return mult(power(m, num - 1), m);
    }
    else {
        Matrix half = power(m, num / 2);
    }
    return m.mult(half, half);
}

int main(void)
{
    cin >> n >> b;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    power(mat, b);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}