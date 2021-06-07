#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    string S; cin >> S;
    vector<string> suffix;

    for (int i = 0; i < S.length(); i++) {
        suffix.push_back(S.substr(i, S.length() - i));
    }
    
    sort(suffix.begin(), suffix.end());

    for (auto i : suffix) {
        cout << i << endl;
    }

    return 0;
}