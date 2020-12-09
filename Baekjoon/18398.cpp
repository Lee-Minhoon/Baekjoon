#include<iostream>

using namespace std;

int main(void)
{
    int t, p; cin >> t;
    int a, b;

    for (int i = 0; i < t; i++) {
        cin >> p;
        for (int j = 0; j < p; j++) {
            cin >> a >> b;
            cout << a + b << " " << a * b << "\n";
        }
    }

    return 0;
}