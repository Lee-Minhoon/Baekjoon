#include <iostream>

using namespace std;

int main(void)
{
    int ans = 0;
    int num; cin >> num;

    while (!cin.eof()) {
        ans += num;
        cin >> num;
    }

    cout << ans;

    return 0;
}