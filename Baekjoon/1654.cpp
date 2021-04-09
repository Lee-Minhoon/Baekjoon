#include<iostream>
#include<vector>

using namespace std;

using LL = long long;

const int MAX = 10000;

int k, n;
vector<LL> lan(MAX);
LL res;

bool check(LL l)
{
    int cnt = 0;
    for (int i = 0; i < k; i++) {
        cnt += (lan[i] / l);
    }
    if (cnt >= n) return true;
    else return false;
}

LL search(LL start, LL end)
{
    if (start > end) return res;
    LL mid = (start + end) / 2;
    if (check(mid)) {
        res = max(res, mid);
        return search(mid + 1, end);
    }
    else return search(start, mid - 1);
}

int main(void)
{
    cin >> k >> n;

    LL m = 0;
    for (int i = 0; i < k; i++) {
        cin >> lan[i];
        m = max(m, lan[i]);
    }

    cout << search(1, m);

    return 0;
}