#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int ans = 0;
    string s, tmp;

    while (getline(cin, s)) {
        for (auto i : s) {
            if (i == ',') {
                ans += stoi(tmp);
                tmp = "";
            }
            else {
                tmp += i;
            }
        }
    }

    ans += stoi(tmp);
    cout << ans;

    return 0;
}