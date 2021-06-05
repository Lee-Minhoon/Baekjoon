#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int N; cin >> N;

    cin.ignore();
    for (int i = 0; i < N; i++) {
        string s; getline(cin, s);
        if (s[0] >= 97) {
            s[0] -= 32;
        }
        cout << s << '\n';
    }

    return 0;
}