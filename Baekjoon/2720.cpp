#include <iostream>

using namespace std;

int main(void)
{
    int T; cin >> T;

    while (T--) {
        int temp; cin >> temp;
        cout << temp / 25 << ' ';
        temp %= 25;
        cout << temp / 10 << ' ';
        temp %= 10;
        cout << temp / 5 << ' ';
        temp %= 5;
        cout << temp / 1 << '\n';
    }

    return 0;
}