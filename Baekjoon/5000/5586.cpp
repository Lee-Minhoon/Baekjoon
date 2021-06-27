#include <iostream>

using namespace std;

int main(void)
{
    string s; cin >> s;

    int joi = 0, ioi = 0;
    for (int i = 0; i < s.length() - 2; i++) {
        if (s[i] == 'J' && s[i + 1] == 'O' && s[i + 2] == 'I') {
            joi++;
        }
        else if (s[i] == 'I' && s[i + 1] == 'O' && s[i + 2] == 'I') {
            ioi++;
        }
    }

    cout << joi << '\n' << ioi;

    return 0;
}