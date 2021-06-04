#include <iostream>

using namespace std;

int main(void)
{
    int T; cin >> T;

    while (T--) {
        int n; cin >> n;
        int idx = 0;
        while (n > 0) {
            if (n & 1) {
                cout << idx << ' ';
            }
            idx++;
            n = n >> 1;
        }
    }

    return 0;
}