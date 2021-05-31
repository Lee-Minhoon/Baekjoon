#include<iostream>
#include<list>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    int m;
    cin >> s >> m;

    list<char> editor(s.begin(), s.end());
    auto cursor = editor.end();

    for (int i = 0; i < m; i++) {
        char c; cin >> c;
        if (c == 'L' && cursor != editor.begin()) cursor--;
        if (c == 'D' && cursor != editor.end()) cursor++;
        if (c == 'B' && cursor != editor.begin()) cursor = editor.erase(--cursor);
        if (c == 'P') {
            char x; cin >> x;
            editor.insert(cursor, x);
        }
    }

    for (const auto& i : editor) cout << i;

    return 0;
}