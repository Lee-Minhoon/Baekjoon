#include<iostream>

using namespace std;

int main(void)
{
    int n; cin >> n;
    
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n + i; j++) {
            if (j == n + i || j == n - i) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}