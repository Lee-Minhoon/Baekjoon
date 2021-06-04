#include <iostream>

using namespace std;

int main(void)
{
    int ans, v = 0;

    for (int i = 1; i <= 5; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            int temp; cin >> temp;
            sum += temp;
        }
        if (v < sum) {
            v = sum;
            ans = i;
        }
    }

    cout << ans << ' ' << v;

    return 0;
}