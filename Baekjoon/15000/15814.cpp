#include<iostream>
#include<string>

using namespace std;

int main(void)
{
    string str; cin >> str;
    int rep; cin >> rep;
    char c;
    int a, b;

    for (int i = 0; i < rep; i++) {
        cin >> a >> b;
        c = str[a];
        str[a] = str[b];
        str[b] = c;
    }

    cout << str;

    return 0;
}