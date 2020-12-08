#include<iostream>
#define COLUMN 3

using namespace std;

void score(int* scores[COLUMN], int t)
{
    int temp;

    for (int i = 0; i < t; i++) {
        for (int k = 0; k < COLUMN; k++) {
            temp = scores[i][k];
            for (int j = 0; j < t; j++) {
                if (i == j) {
                    continue;
                }
                if (temp == scores[j][k]) {
                    scores[i][k] = 0;
                    scores[j][k] = 0;
                }
            }
        }
    }
}

int main(void)
{
    int t; cin >> t;
    int** scores = new int* [t];
    for (int i = 0; i < t; i++) {
        scores[i] = new int[COLUMN];
        for (int j = 0; j < COLUMN; j++) {
            cin >> scores[i][j];
        }
    }

    score(scores, t);

    int total;
    for (int i = 0; i < t; i++) {
        total = 0;
        for (int j = 0; j < COLUMN; j++) {
            total += scores[i][j];
        }
        cout << total << "\n";
    }

    return 0;
}