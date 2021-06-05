#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int scores[2][10];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 10; j++) {
            cin >> scores[i][j];
        }
    }

    sort(scores[0], scores[0] + 10);
    sort(scores[1], scores[1] + 10);
    
    cout << scores[0][9] + scores[0][8] + scores[0][7] << ' ';
    cout << scores[1][9] + scores[1][8] + scores[1][7];

    return 0;
}