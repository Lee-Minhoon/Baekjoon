#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second) return a.first < b.first;
    return a.second < b.second;
}

int main(void)
{
    int n; cin >> n;
    vector<pair<int, int>> vec(n);

    for (int i = 0; i < n; i++) {
        cin >> vec[i].first >> vec[i].second;
    }

    sort(vec.begin(), vec.end(), cmp);

    int time = 0, res = 0;
    for (int i = 0; i < n; i++) {
        if (vec[i].first >= time) {
            time = vec[i].second;
            res++;
        }
    }

    cout << res;

    return 0;
}