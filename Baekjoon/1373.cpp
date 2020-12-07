#include<iostream>
#include<string>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str; cin >> str;
    string::iterator iter;
    int sum = 0;
    int digit = 0;
    int mult[3] = { 4, 2, 1 };
    int len = str.length() % 3;

    digit = abs(len - 3);
    for (iter = str.begin(); iter < str.begin() + len; iter++) {
        sum += (*(iter)-'0') * mult[digit % 3];
        digit++;
        if (iter == str.begin() + len - 1) {
            cout << sum;
            sum = 0;
        }
    }

    for (iter = str.begin() + len; iter < str.end(); iter++) {
        sum += (*(iter) - '0') * mult[digit % 3];
        digit++;
        if (digit % 3 == 0) {
            cout << sum;
            sum = 0;
        }
    }

    return 0;
}