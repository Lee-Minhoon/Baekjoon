#include<iostream>

using namespace std;

int main(void)
{
    int n; cin >> n;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n + i; j++) {
            if (j < n - i - 1) cout << ' ';
            else {
                if ((j + i + n) % 2 == 0) cout << ' ';
                else cout << '*';
            }
        }
        cout << '\n';
    }

    return 0;
}