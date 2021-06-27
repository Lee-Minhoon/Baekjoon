#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int T; cin >> T;
    cin.ignore();

    while (T--) {
        int ans = 0;
        string s; getline(cin, s);
        for (int i = 0; i < s.length(); i++) {
            string tmp = "";
            while (i < s.length() && s[i] != ' ') {
                tmp += s[i];
                i++;
            }
            ans += stoi(tmp);
        }
        cout << ans << '\n';
    }

    return 0;
}