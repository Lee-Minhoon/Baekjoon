#include<iostream>

using namespace std;

int main(void)
{
    int t, n; cin >> t;
    int temp, j;

    for (int i = 0; i < t; i++) {
        cin >> n;
        j = 1;
        temp = n - j;
        cout << "Pairs for " << n << ":";
        while (temp > j) {
            cout << " " << j << " " << temp;
            j++;
            temp = n - j;
            if (temp > j) {
                cout << ",";
            }
        }
        cout << "\n";
    }

    return 0;
}