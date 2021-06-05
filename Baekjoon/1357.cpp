#include <iostream>
#include <string>

using namespace std;

int Rev(int num)
{
    string s = to_string(num);
    string rev;
    for (string::reverse_iterator it = s.rbegin(); it < s.rend(); it++) {
        rev += *it;
    }
    return stoi(rev);
}

int main(void)
{
    int X, Y; cin >> X >> Y;

    cout << Rev(Rev(X) + Rev(Y));

    return 0;
}