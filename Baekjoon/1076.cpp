#include <iostream>
#include <string>
#include <map>
#include <cmath>

using namespace std;

map<string, long long> m = {
    {"black", 0},
    {"brown", 1},
    {"red", 2},
    {"orange", 3},
    {"yellow", 4},
    {"green", 5},
    {"blue", 6},
    {"violet", 7},
    {"grey", 8},
    {"white", 9},
};

int main(void)
{
    string s[3];
    
    for (int i = 0; i < 3; i++) {
        cin >> s[i];
    }
    
    long long factor = pow(10, m[s[2]]);
    cout << m[s[0]] * factor * 10 + m[s[1]] * factor;

    return 0;
}