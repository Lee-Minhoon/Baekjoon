#include<iostream>
#include<cmath>

using namespace std;

int turret(int x1, int y1, int r1, int x2, int y2, int r2)
{
    int xdis = x1 - x2;
    int ydis = y1 - y2;
    int radd = (r1 + r2) * (r1 + r2);
    int rdis = (r1 - r2) * (r1 - r2);
    int dis = xdis * xdis + ydis * ydis;

    if (rdis < dis && dis < radd) {
        return 2;
    }
    else if ((rdis == dis || dis == radd) && dis != 0) {
        return 1;
    }
    else if (radd < dis || dis < rdis) {
        return 0;
    }
    else {
        return -1;
    }
}

int main(void)
{
    int t; cin >> t;
    int x1, y1, r1, x2, y2, r2;

    for (int i = 0; i < t; i++) {
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        cout << turret(x1, y1, r1, x2, y2, r2) << "\n";
    }

    return 0;
}