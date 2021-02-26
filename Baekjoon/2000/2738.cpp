#include<iostream>

using namespace std;

int main(void)
{
    short n, m; cin >> n >> m;
    short** matrix = new short* [n];

    for (short i = 0; i < n; i++) {
        matrix[i] = new short[m];
    }

    short temp;
    for (short rep = 0; rep < 2; rep++) {
        for (short i = 0; i < n; i++) {
            for (short j = 0; j < m; j++) {
                if (rep == 0) {
                    cin >> temp;
                    matrix[i][j] = temp;
                }
                else {
                    cin >> temp;
                    matrix[i][j] += temp;
                }
            }
        }
    }
    
    for (short i = 0; i < n; i++) {
        for (short j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}