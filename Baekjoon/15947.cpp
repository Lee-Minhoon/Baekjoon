#include<iostream>
#include<string>

using namespace std;

int main(void)
{
    int n; cin >> n;
    int rep, part;
    string lyrics[15] = { "","baby","sukhwan","","","very","cute","","","in","bed","","","baby","sukhwan" };
    int parts[8] = { 1, 2, 5, 6, 9, 10, 13, 14 };
    int temp;
    bool b = true;

    rep = n / 14;
    part = (n - 1) % 14 + 1;

    for (int i = 0; i < 8; i++) {
        if (part == parts[i]) {
            cout << lyrics[parts[i]];
            b = false;
        }
    }

    if (b) {
        if (part == 3 || part == 7 || part == 11) {
            temp = 3;
        }
        else {
            temp = 4;
        }
        cout << "tu";
        if (rep < temp) {
            for (int i = 0; i < rep + 5 - temp; i++) {
                cout << "ru";
            }
        }
        else {
            cout << "+ru*" << rep + 5 - temp;
        }
    }

    return 0;
}