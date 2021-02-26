#include<iostream>
#include<string>

using namespace std;

int main(void)
{
    string s; cin >> s;
    int digit = 0;

    for (string::iterator iter = s.begin(); iter < s.end(); iter++) {
        cout << *iter;
        digit++;
        if (digit >= 10) {
            digit = 0;
            cout << endl;
        }
    }

    return 0;
}