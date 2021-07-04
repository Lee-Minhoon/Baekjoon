#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int N; cin >> N;

    while (N--) {
        string s; cin >> s;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '+') {
                int left = stoi(s.substr(0, i));
                int right = stoi(s.substr(i + 1));
                cout << left + right << '\n';
                break;
            }
            if (s[i] == '=') {
                cout << "skipped\n";
                break;
            }
        }
    }

    return 0;
}