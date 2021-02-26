#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool cmp(string a, string b)
{
    if (a.length() == b.length()) {
        return a < b;
    }
    else {
        return a.length() < b.length();
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; cin >> n;
    vector<string> str;

    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        str.push_back(s);
    }

    sort(str.begin(), str.end(), cmp);
    str.erase(unique(str.begin(), str.end()), str.end());

    for (vector<string>::iterator it = str.begin(); it < str.end(); it++) {
        cout << *it << "\n";
    }

    return 0;
}