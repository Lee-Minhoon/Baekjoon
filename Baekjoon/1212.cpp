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
    string first[8] = {"0", "1", "10", "11", "100", "101", "110", "111" };
    string binary[8] = { "000", "001", "010", "011", "100", "101", "110", "111" };
    int index;

    index = *str.begin() - '0';
    cout << first[index];
    for (iter = str.begin() + 1; iter < str.end(); iter++) {
        index = *iter - '0';
        cout << binary[index];
    }

    return 0;
}