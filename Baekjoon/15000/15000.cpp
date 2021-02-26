#include<iostream>

using namespace std;

int main(void)
{
    string str; cin >> str;
    string::iterator iter;
    string upper;

    for (iter = str.begin(); iter < str.end(); iter++) {
        upper.push_back(*iter - ' ');
    }

    cout << upper;

    return 0;
}