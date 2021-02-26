#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Location {
public:
    int x;
    int y;
    Location(int x, int y) :x(x), y(y) {}
};

bool cmp(Location a, Location b)
{
    if (a.x == b.x) {
        return a.y < b.y;
    }
    else {
        return a.x < b.x;
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; cin >> n;
    vector<Location> loc;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        int y; cin >> y;
        loc.push_back(Location(x, y));
    }

    sort(loc.begin(), loc.end(), cmp);

    for (int i = 0; i < n; i++) {
        cout << loc[i].x << " " << loc[i].y << "\n";
    }

    return 0;
}