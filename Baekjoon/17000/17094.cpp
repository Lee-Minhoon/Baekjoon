#include<iostream>

using namespace std;

int main(void)
{
    int t; cin >> t;
    string str; cin >> str;
    string::iterator iter;
    int two = 0, e = 0;

    for (iter = str.begin(); iter < str.end(); iter++) {
        if (*iter == '2') {
            two++;
        }
        else {
            e++;
        }
    }

    if (two > e) {
        cout << "2";
    }
    else if (e > two) {
        cout << "e";
    }
    else {
        cout << "yee";
    }

    return 0;
}