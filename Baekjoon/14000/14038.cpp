#include<iostream>

using namespace std;

int main(void)
{
    int w = 0, l = 0;
    char c;

    for (int i = 0; i < 6; i++) {
        cin >> c;
        if (c == 'W') {
            w++;
        }
        else {
            l++;
        }
    }

    if (w >= 5) {
        cout << 1;
    }
    else if (w >= 3) {
        cout << 2;
    }
    else if (w >= 1) {
        cout << 3;
    }
    else {
        cout << -1;
    }

    return 0;
}