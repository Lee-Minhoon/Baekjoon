#include <iostream>

using namespace std;

int main(void)
{
    int a, b; string s;
    cin >> a >> s >> b;
    int cnt = 1;

    while (s != "E") {
        bool ans;
        if (s == ">") {
            ans = a > b;
        }
        else if (s == ">=") {
            ans = a >= b;
        }
        else if (s == "<") {
            ans = a < b;
        }
        else if (s == "<=") {
            ans = a <= b;
        }
        else if (s == "==") {
            ans = a == b;
        }
        else {
            ans = a != b;
        }
        printf("Case %d: ", cnt++);
        ans ? cout << "true" : cout << "false";
        cout << '\n';
        cin >> a >> s >> b;
    }

    return 0;
}