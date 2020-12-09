#include<iostream>
#include<string>

using namespace std;

int main(void)
{
    int t; cin >> t;
    cin.ignore();
    int c, v;
    bool vowel;
    string str;
    string::iterator iter;
    char vowels[10] = { 'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u' };

    for (int i = 0; i < t; i++) {
        c = 0, v = 0;
        getline(cin, str);
        for (iter = str.begin(); iter < str.end(); iter++) {
            if (*iter != ' ') {
                vowel = false;
                for (int j = 0; j < 10; j++) {
                    if (*iter == vowels[j]) {
                        v++;
                        vowel = true;
                    }
                }
                if (!vowel) {
                    c++;
                }
            }
        }
        cout << c << " " << v << "\n";
    }

    return 0;
}