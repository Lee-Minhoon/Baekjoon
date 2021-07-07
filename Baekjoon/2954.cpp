#include <iostream>
#include <string>

using namespace std;

const char vowels[5] = { 'a', 'e', 'i', 'o', 'u' };

int main(void)
{
    string s; getline(cin, s);

    for (int i = 1; i < s.length(); i++) {
        if (s[i] == 'p') {
            for (int j = 0; j < 5; j++) {
                if (s[i - 1] == vowels[j]) {
                    s.erase(i, 2);
                    break;
                }
            }
        }
    }

    cout << s;

    return 0;
}