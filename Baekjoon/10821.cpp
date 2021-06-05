#include <iostream>

using namespace std;

int main(void)
{
    string s; cin >> s;
    int cnt = 0;

    for (auto i : s) {
        if (i == ',') {
            cnt++;
        }
    }

    cout << cnt + 1;

    return 0;
}