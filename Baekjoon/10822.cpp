#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int ans = 0;
    string s; cin >> s;

    while (s.find(",") != string::npos) {
        int t = s.find(',');
        ans += stoi(s.substr(0, t));
        s = s.substr(t + 1);
    }

    ans += stoi(s);
    cout << ans;

    return 0;
}