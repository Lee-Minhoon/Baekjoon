#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
    string s; getline(cin, s);

    while (s != "EOI") {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        if (s.find("nemo") != string::npos) {
            cout << "Found\n";
        }
        else {
            cout << "Missing\n";
        }
        getline(cin, s);
    }

    return 0;
}