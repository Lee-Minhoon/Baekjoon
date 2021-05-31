#include<iostream>

using namespace std;

int main(void)
{
    int n, y, x; cin >> n >> y >> x;
    bool flag;

    if ((y + x) % 2 == 0) flag = true;
    else flag = false;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i + j) % 2 == !flag) cout << 'v';
            else cout << '.';
        }
        cout << '\n';
    }

    return 0;
}