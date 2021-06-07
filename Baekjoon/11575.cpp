#include <iostream>

using namespace std;

int main(void)
{
    int T; cin >> T;

    while (T--) {
        int a, b; cin >> a >> b;
        string s; cin >> s;
        for (auto i : s) {
            i = (a * (i - 65) + b) % 26 + 65;
            cout << i;
        }
        cout << '\n';
    }
    
    return 0;
}