#include <iostream>

using namespace std;

int main(void)
{
    int T; cin >> T;

    while (T--) {
        int sum = 0, v = 100;
        for (int i = 0; i < 7; i++) {
            int temp; cin >> temp;
            if (temp % 2 == 0) {
                sum += temp;
                v = min(v, temp);
            }
        }
        sum == 0 ? cout << -1 : cout << sum << ' ' << v << endl;
    }

    return 0;
}