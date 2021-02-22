#include<iostream>

using namespace std;

void vps(string str, int len)
{
    int stack = 0;
    for (int i = 0; i < len; i++) {
        if (stack == -1) {
            cout << "NO" << endl;
            return;
        }
        if (str[i] == '(') stack++;
        else stack--;
    }
    if (stack != 0) cout << "NO" << endl;
    else cout << "YES" << endl;
}

int main(void)
{
    int t; cin >> t;
    
    for (int i = 0; i < t; i++) {
        string str; cin >> str;
        int len = str.length();
        if (len % 2 == 0) vps(str, len);
        else cout << "NO" << endl;
    }

    return 0;
}