#include <iostream>

using namespace std;

int main(void)
{
    int res; cin >> res;

    for (int i = 0; i < 9; i++) {
        int temp; cin >> temp;
        res -= temp;
    }

    cout << res;

    return 0;
}