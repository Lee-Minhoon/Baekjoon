#include<iostream>

using namespace std;

int main(void)
{
    int t; cin >> t;
    int rep;
    char c;
    
    for (int i = 0; i < t; i++) {
        cin >> rep >> c;
        for (int j = 0; j < rep; j++) {
            cout << c;
        }
        cout << "\n";
    }

    return 0;
}