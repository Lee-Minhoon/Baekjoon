#include<iostream>

using namespace std;

const int MAX = 100;

int n, m, k;

int A[MAX][MAX];
int B[MAX][MAX];
int res[MAX][MAX];

void mult(void)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            for (int k = 0; k < m; k++) {
                res[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main(void)
{
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> A[i][j];
        }
    }

    cin >> m >> k;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < k; j++) {
            cin >> B[i][j];
        }
    }

    mult();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            cout << res[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}