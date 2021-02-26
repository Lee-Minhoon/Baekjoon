#include<iostream>

using namespace std;

int main(void)
{
    string str; cin >> str;
    string rev;
    string::reverse_iterator iter;

    for (iter = str.rbegin(); iter < str.rend(); iter++) {
        rev.push_back(*iter);
    }

    if (str == rev) {
        cout << "1";
    }
    else {
        cout << "0";
    }

    return 0;
}