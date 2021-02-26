#include<iostream>

using namespace std;

int main(void)
{
    short n; cin >> n;

    for (short i = 0; i < n * 2 - 1; i++) {
        for (short j = 0; j < n; j++) {
            if (j >= abs(n - i - 1)) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}