#include<iostream>
#include<string>

using namespace std;

int main(void)
{
    int t; cin >> t;
    int sum, j;
    string str;
    string::reverse_iterator iter;

    for (int i = 0; i < t; i++) {
        sum = 0;
        j = 0;
        cin >> str;

        for (iter = str.rbegin(); iter < str.rend(); iter++) {
            sum += (*iter - '0') << j;
            j++;
        }

        cout << sum << "\n";
    }

    return 0;
}