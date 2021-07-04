#include <iostream>
#include <string>
#include <vector>
#include <cstring>

using namespace std;

const int MAX = 26;

bool cache[MAX];

int main(void)
{
    int N; cin >> N;
    cin.ignore();

    while (N--) {
        memset(cache, false, sizeof(cache));

        string s; getline(cin, s);

        for (int i = 0; i < s.length(); i++) {
            cache[tolower(s[i]) - 97] = true;
        }

        bool flag = true;
        vector<char> c;
        for (int i = 0; i < MAX; i++) {
            if (!cache[i]) {
                flag = false;
                c.push_back(i + 97);
            }
        }
        
        if (flag) {
            cout << "pangram\n";
        }
        else {
            cout << "missing ";
            for (auto i : c) {
                cout << i;
            }
            cout << '\n';
        }
    }

    return 0;
}