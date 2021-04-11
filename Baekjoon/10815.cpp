#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int n, m;

bool search(const vector<int>& v, int num)
{
    int left = 0, right = n - 1, mid;

    while (left <= right) {
        mid = (left + right) / 2;
        if (v[mid] > num) right = mid - 1;
        else if (v[mid] < num) left = mid + 1;
        else return true;
    }

    return false;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    cin >> m;

    for (int i = 0; i < m; i++) {
        int tmp; cin >> tmp;
        cout << search(v, tmp) << ' ';
    }

    return 0;
}