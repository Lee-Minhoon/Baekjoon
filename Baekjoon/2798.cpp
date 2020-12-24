#include<iostream>

using namespace std;

int blackjack(int* cards, int n, int m)
{
    int sum, max = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                sum = cards[i] + cards[j] + cards[k];
                if (max < sum && sum <= m) {
                    max = sum;
                }
            }
        }
    }

    return max;
}

int main(void)
{
    int n, m; cin >> n >> m;
    int* cards = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> cards[i];
    }
    cout << blackjack(cards, n, m);

    return 0;
}