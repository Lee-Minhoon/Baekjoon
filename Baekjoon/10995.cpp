#include<iostream>

using namespace std;

int main(void)
{
    int n; cin >> n;

    for (int i = 0; i < n; i++) {
        int tmp = i % 2;
        for (int j = tmp; j < tmp + n * 2; j++) {
            if (j % 2 == 0) cout << '*';
            else cout << ' ';
        }
        cout << '\n';
    }

    return 0;
}