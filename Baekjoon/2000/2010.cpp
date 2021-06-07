#include <iostream>

using namespace std;

int main(void)
{
    int n; cin >> n;
    int res = 1;

    while (n--) {
        int temp; cin >> temp;
        res += (temp - 1);
    }

    cout << res;

    return 0;
}