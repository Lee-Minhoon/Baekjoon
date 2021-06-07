#include <iostream>

using namespace std;

int main(void)
{
    string s; cin >> s;

    for (auto i : s) {
        if (i >= 68) {
            i -= 3;
        }
        else {
            i = 90 - (2 - (i - 65));
        }
        cout << i;
    }

    return 0;
}