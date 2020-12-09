#include<iostream>

using namespace std;

int main(void)
{
    int t, temp; cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> temp;
        for (int j = 0; j < temp; j++) {
            cout << "=";
        }
        cout << "\n";
    }

    return 0;
}