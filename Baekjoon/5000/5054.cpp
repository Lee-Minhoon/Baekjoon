#include <iostream>

using namespace std;

int main(void)
{
    int t; cin >> t;

    while (t--) {
        int avg = 0, left = 100, right = 0;
        int n; cin >> n;
        for (int i = 0; i < n; i++) {
            int temp; cin >> temp;
            avg += temp;
            left = min(left, temp);
            right = max(right, temp);
        }
        avg /= n;
        cout << (avg - left) * 2 + (right - avg) * 2 << endl;
    }

    return 0;
}