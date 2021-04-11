#include<iostream>
#include<vector>

using namespace std;

int main(void)
{
    int n, k; cin >> n >> k;
    string s; cin >> s;
    
    vector<char> v;

    for (int i = 0; i < n; i++) {
        while (k && !v.empty() && v.back() < s[i]) {
            v.pop_back();
            k--;
        }
        v.push_back(s[i]);
    }

    size_t sz = v.size();
    for (size_t i = 0; i < sz - k; i++) {
        cout << v[i];
    }

    return 0;
}