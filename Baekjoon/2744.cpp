#include<iostream>
#include<string>

using namespace std;

int main(void)
{
    string str; cin >> str;
    int len = str.length();

    for (int i = 0; i < len; i++) {
        if (int(str[i]) <= 90) {
            str[i] = str[i] + 32;
        }
        else {
            str[i] = str[i] - 32;
        }
    }

    cout << str;

    return 0;
}