#include<iostream>

using namespace std;

int main(void)
{
    int a = 0, b = 0, temp;

    for (int i = 0; i < 3; i++) {
        cin >> temp; a += temp * (3 - i);
    }
    for (int i = 0; i < 3; i++) {
        cin >> temp; b += temp * (3 - i);
    }

    if (a > b) {
        cout << "A";
    }
    else if (b > a) {
        cout << "B";
    }
    else {
        cout << "T";
    }

    return 0;
}