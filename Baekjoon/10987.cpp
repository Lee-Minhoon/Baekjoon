#include <iostream>

using namespace std;

char vowles[5] = { 'a', 'e', 'i', 'o', 'u' };

int main(void)
{
    string s; cin >> s;
    int cnt = 0;

    for (auto i : s) {
        for (int j = 0; j < 5; j++) {
            if (i == vowles[j]) {
                cnt++;
                break;
            }
        }
    }

    cout << cnt;

    return 0;
}