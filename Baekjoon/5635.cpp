#include <iostream>

using namespace std;

int main(void)
{
    string youngest, oldest;
    int yb[3] = { 0, 0, 1989 };
    int ob[3] = { 0, 0, 2011 };

    int n; cin >> n;
    
    while (n--) {
        string s; int d, m, y;
        cin >> s >> d >> m >> y;
        if (y > yb[2] || (y == yb[2] && m > yb[1]) || (y == yb[2] && m == yb[1] && d > yb[0])) {
            yb[0] = d; yb[1] = m; yb[2] = y;
            youngest = s;
        }
        if (y < ob[2] || (y == ob[2] && m < ob[1]) || (y == ob[2] && m == ob[1] && d < ob[0])) {
            ob[0] = d; ob[1] = m; ob[2] = y;
            oldest = s;
        }
    }

    cout << youngest << endl << oldest;

    return 0;
}