#include<iostream>
#include<vector>
#include<algorithm>

#define X first
#define Y second
#define MAX 1000000000000ll;

using namespace std;

typedef long long LL;
typedef pair<LL, LL> PAIR;

int n;
PAIR point[500004];

LL square(LL i)
{
    return i * i;
}

LL dist(PAIR a, PAIR b)
{
    return square(a.X - b.X) + square(a.Y - b.Y);
}

bool op(PAIR a, PAIR b)
{
    if (a.Y != b.Y)
        return a.Y < b.Y;
    else
        return a.X < b.X;
}

LL solve(int st, int en)
{
    if (en - st == 1)
        return 200000000;
    int mid = (st + en) / 2;
    LL d = min(solve(0, mid), solve(mid + 1, en));

    vector<PAIR> V;
    LL line = point[mid].X;

    for (int i = st; i < en; i++) {
        if (square(point[i].X - line) <= d) {
            V.push_back(point[i]);
        }
    }

    sort(V.begin(), V.end(), op);

    int len = V.size();
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len && j < i + 7; j++) {
            d = min(d, dist(V[i], V[j]));
        }
    }

    return d;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> point[i].X >> point[i].Y;
    }

    sort(point, point + n);

    cout << solve(0, n - 1);

    return 0;
}