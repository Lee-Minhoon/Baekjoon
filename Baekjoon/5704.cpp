#include <iostream>
#include <string>
#include <cstring>

using namespace std;

const int MAX = 26;

bool cache[MAX];

int main(void)
{
    string s; getline(cin, s);

    while (s != "*") {
        memset(cache, false, sizeof(cache));

        for (int i = 0; i < s.length(); i++) {
            int idx = s[i] - 97;
            cache[idx] = true;
        }

        bool flag = true;
        for (int i = 0; i < MAX; i++) {
            if (!cache[i]) {
                flag = false;
                break;
            }
        }
        flag ? cout << "Y\n" : cout << "N\n";

        getline(cin, s);
    }
    

    return 0;
}