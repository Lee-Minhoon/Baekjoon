#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

const int MAX = 100000;

int n;
using p = pair<int, int>;
vector<p> ps(MAX);

int power(int i)
{
    return i * i;
}

int dis(const p& p1, const p& p2)
{
    int x = p1.first - p2.first;
    int y = p1.second - p2.second;
    return power(x) + power(y);
}

int cmp_x(const p& p1, const p& p2)
{
    if (p1.first < p2.first) return true;
    else return false;
};

int cmp_y(const p& p1, const p& p2)
{
    if (p1.second < p2.second) return true;
    else return false;
};

int closer(int l, int r)
{
    int n = r - l + 1;
    if (n == 2) return dis(ps[l], ps[r]);
    if (n == 3) {
        return min({ dis(ps[l], ps[l + 1]), dis(ps[l + 1], ps[l + 2]), dis(ps[l], ps[r]) });
    }
    int mid = l + r / 2;
    int ret = min(closer(0, mid), closer(mid + 1, r));
    int line = ps[mid].first + ps[mid + 1].first / 2;

    vector<p> in;
    in.reserve(n);

    for (int i = l; i < r; i++) {
        if (power(line - ps[i].first) < ret) {
            in.push_back(ps[i]);
        }
    }

    sort(in.begin(), in.end(), cmp_y);

    int len = in.size();
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            if (power(in[i].second - in[j].second) >= ret) break;
            else {
                ret = min(ret, dis(in[i], in[j]));
            }
        }
    }

    return ret;
}

int main(void)
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> ps[i].first >> ps[i].second;
    }

    sort(ps.begin(), ps.begin() + n, cmp_x);

    cout << closer(0, n - 1);

    return 0;
}