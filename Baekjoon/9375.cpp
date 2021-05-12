#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main(void)
{
    int t; cin >> t;
    while (t--) {
        map<string, int> m;
        vector<string> kinds;
        int n; cin >> n;
        for (int i = 0; i < n; i++) {
            string s; cin >> s >> s;
            if (m.find(s) != m.end()) {
                m[s]++;
            }
            else {
                kinds.push_back(s);
                m.insert(make_pair(s, 2));
            }
        }
        int res = 1;
        for (auto i : kinds) {
            res *= m[i];
        }
        cout << res - 1 << '\n';
    }

    return 0;
}