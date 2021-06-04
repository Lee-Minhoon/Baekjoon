#include <iostream>

using namespace std;

int main(void)
{
    int T; cin >> T;

    while (T--) {
        int temp; cin >> temp;
        string s; cin >> s;
        s.erase(temp - 1, 1);
        cout << s << endl;
    }

    return 0;
}