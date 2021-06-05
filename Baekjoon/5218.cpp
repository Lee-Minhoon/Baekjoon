#include <iostream>

using namespace std;

int main(void)
{
    int T; cin >> T;

    while (T--) {
        string a, b; cin >> a >> b;
        int len = a.length();
        cout << "Distances: ";
        for (int i = 0; i < len; i++) {
            int temp = b[i] - a[i];
            if (temp < 0) {
                temp += 26;
            }
            cout << temp << ' ';
        }
        cout << '\n';
    }

    return 0;
}