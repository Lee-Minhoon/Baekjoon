#include<iostream>

using namespace std;

int dis(int n, int m)
{
    int min = 0;

    if (abs(0 - n) <= m - n) {
        return abs(0 - n);
    }
    else {
        return m - n;
    }
}

int main(void)
{
    int x, y, w, h; cin >> x >> y >> w >> h;
    int rx, ry;

    rx = dis(x, w);
    ry = dis(y, h);

    if (rx <= ry) {
        cout << rx;
    }
    else {
        cout << ry;
    }
    
    return 0;
}