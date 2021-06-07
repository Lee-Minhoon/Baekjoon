#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
    string s; getline(cin, s);

    while (s != "END") {
        reverse(s.begin(), s.end());
        cout << s << '\n';
        getline(cin, s);
    }

    return 0;
}