#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

#define X first
#define Y second

using namespace std;

const int MAX = 100000;

int n;
using p = pair<int, int>;
p ps[MAX];

int power(int i)
{
    return i * i;
}

int dis(const p& p1, const p& p2)
{
    int x = p1.X - p2.X;
    int y = p1.Y - p2.Y;
    return power(x) + power(y);
}

bool cmp(const p& p1, const p& p2)
{
    if (p1.Y < p2.Y) return true;
    else return false;
};

int closest(int l, int r)
{
    int n = r - l + 1;
    if (n == 2) return dis(ps[l], ps[r]);
    if (n == 3) {
        return min({ dis(ps[l], ps[l + 1]), dis(ps[l + 1], ps[l + 2]), dis(ps[l], ps[r]) });
    }

    int mid = (l + r) / 2;
    int ret = min(closest(l, mid), closest(mid + 1, r));

    vector<p> in;
    in.reserve(n);
    int line = (ps[mid].X + ps[mid + 1].X) / 2;

    for (int i = l; i < r; i++) {
        if (power(line - ps[i].X) < ret) {
            in.push_back(ps[i]);
        }
    }

    sort(in.begin(), in.end(), cmp);

    int len = in.size();
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            if (power(in[i].Y - in[j].Y) >= ret) break;
            else ret = min(ret, dis(in[i], in[j]));
        }
    }

    return ret;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> ps[i].X >> ps[i].Y;
    }

    sort(ps, ps + n);

    cout << closest(0, n - 1);

    return 0;
}