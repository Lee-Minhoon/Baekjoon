#include <iostream>

using namespace std;

int main(void)
{
    int n; cin >> n;

    while (n--) {
        int p; cin >> p;
        int value = 0; string name;
        while (p--) {
            int i; string s;
            cin >> i >> s;
            if (i > value) {
                value = i;
                name = s;
            }
        }
        cout << name << '\n';
    }

    return 0;
}