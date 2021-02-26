#include<iostream>

using namespace std;

int main(void)
{
    int n; cin >> n;
    int a, b;

    if (n % 2 == 0) {
        cout << "I LOVE CBNU";
    }
    else {
        for (int i = 0; i < n; i++) {
            cout << "*";
        }
        cout << "\n";
        a = n / 2;
        b = n / 2;
        for (int i = 0; i < n / 2 + 1; i++) {
            for (int j = 0; j < b + 1; j++) {
                if (j == a || j == b) {
                    cout << "*";
                }
                else {
                    cout << " ";
                }
            }
            cout << "\n";
            a--;
            b++;
        }
    }

    return 0;
}