#include <iostream>

using namespace std;

int RSP(char A, char B)
{
    if (A == B) {
        return 0;
    }
    else if (A == 'R' && B == 'P') {
        return 2;
    }
    else if (A == 'S' && B == 'R') {
        return 2;
    }
    else if (A == 'P' && B == 'S') {
        return 2;
    }
    else {
        return 1;
    }
}

int main(void)
{
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        int P1 = 0, P2 = 0;
        while (n--) {
            char a, b; cin >> a >> b;
            int result = RSP(a, b);
            if (result == 1) {
                P1++;
            }
            else if (result == 2) {
                P2++;
            }
        }
        if (P1 > P2) {
            cout << "Player 1\n";
        }
        else if (P2 > P1) {
            cout << "Player 2\n";
        }
        else {
            cout << "TIE\n";
        }
    }

    return 0;
}