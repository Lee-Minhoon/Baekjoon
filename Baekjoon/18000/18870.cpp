#include<iostream>
#include<vector>
#include<algorithm>

#define idx first
#define val second

using namespace std;

using PAIR = pair<int, int>;

const int MAX = 1000000;

vector<PAIR> v(MAX);

bool cmpIdx(const PAIR& a, const PAIR& b)
{
    if (a.idx < b.idx) return true;
    else return false;
}

bool cmpVal(const PAIR& a, const PAIR& b)
{
    if (a.val < b.val) return true;
    else return false;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; cin >> n;

    for (int i = 0; i < n; i++) {
        int t; cin >> t;
        v[i].idx = i;
        v[i].val = t;
    }

    sort(v.begin(), v.begin() + n, cmpVal);

    int cnt = 0;
    for (int i = 0; i < n - 1; i++) {
        if (v[i].val != v[i + 1].val) v[i].val = cnt++;
        else v[i].val = cnt;
    }
    v[n - 1].val = cnt;

    sort(v.begin(), v.begin() + n, cmpIdx);

    for (int i = 0; i < n; i++) {
        cout << v[i].val << ' ';
    }

    return 0;
}