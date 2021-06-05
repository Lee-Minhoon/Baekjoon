#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string s; getline(cin, s);

    for (auto i : s) {
        if (i >= 65 && i <= 90) {
            if (i + 13 > 90) {
                i -= 13;
            }
            else {
                i += 13;
            }
        }
        else if (i >= 97 && i <= 122) {
            if (i + 13 > 122) {
                i -= 13;
            }
            else {
                i += 13;
            }
        }
        cout << i;
    }

    return 0;
}