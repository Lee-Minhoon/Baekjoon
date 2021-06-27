#include <iostream>

using namespace std;

int main(void)
{
    string s[5];
    for (int i = 0; i < 5; i++) {
        cin >> s[i];
    }

    bool exist = false;
    for (int i = 0; i < 5; i++) {
        if (s[i].find("FBI") != string::npos) {
            cout << i + 1 << ' ';
            exist = true;
        }
    }

    if (!exist) {
        cout << "HE GOT AWAY!";
    }

    return 0;
}