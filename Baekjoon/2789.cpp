#include <iostream>
#include <algorithm>

using namespace std;

string del = "CAMBRIDGE";

int main(void)
{
    string s; cin >> s;

    for (int i = 0; i < del.length(); i++) {
        s.erase(remove(s.begin(), s.end(), del[i]), s.end());
    }

    cout << s;

    return 0;
}