#include <iostream>

using namespace std;

int main(void)
{
    int m, d; cin >> m >> d;

    if (m == 1 || (m <= 2 && d < 18)) {
        cout << "Before";
    }
    else if ((m == 2 && d > 18) || m >= 3) {
        cout << "After";
    }
    else {
        cout << "Special";
    }

    return 0;
}