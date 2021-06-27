#include <iostream>

using namespace std;

int main(void)
{
    int scores[2] = { 0, };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            int temp; cin >> temp;
            scores[i] += temp;
        }
    }

    if (scores[0] >= scores[1]) {
        cout << scores[0];
    }
    else {
        cout << scores[1];
    }

    return 0;
}