#include<iostream>
#include<algorithm>

using namespace std;

int main(void)
{
    int num[3];

    for (int i = 0; i < 3; i++) {
        cin >> num[i];
    }

    sort(num, num + 3);

    string s; cin >> s;
    for (int i = 0; i < 3; i++) {
        cout << num[s[i] - 65] << ' ';
    }

    return 0;
}