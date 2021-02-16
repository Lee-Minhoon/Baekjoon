#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(void)
{
    int n; cin >> n;
    vector<int> p(n);

    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    sort(p.begin(), p.end());

    int sum = p[0];
    for (int i = 1; i < n; i++) {
        p[i] = p[i] + p[i - 1];
        sum += p[i];
    }

    cout << sum;

    return 0;
}