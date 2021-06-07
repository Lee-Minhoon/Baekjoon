#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(void)
{
    int N; cin >> N;

    while (N--) {
        string s; cin >> s;
        int scores[2] = { 0, };
        for (int i = 0; i < 3; i++) {
            scores[0] += (s[i] - 65) * pow(26, 2 - i);
        }
        scores[1] = stoi(s.substr(4, 4));
        if (abs(scores[0] - scores[1]) <= 100) {
            cout << "nice\n";
        }
        else {
            cout << "not nice\n";
        }
    }

    return 0;
}