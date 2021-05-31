#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int gcd(int a, int b)
{
    return a % b ? gcd(b, a % b) : b;
}

int main(void)
{
    int n; cin >> n;
    vector<int> v(n);
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int g = v[1] - v[0];
    int i = 2;
    while (i < v.size()) {
        g = gcd(v[i] - v[i - 1], g);
        i++;
    }

    vector<int> r;
    i = 1;
    for (; i * i < g; i++) {
        if (g % i == 0) {
            r.push_back(i);
            r.push_back(g / i);
        }
    }
    if (i * i == g) r.push_back(i);
    
    sort(r.begin(), r.end());
    r.erase(r.begin());
    for (auto& i : r) cout << i << ' ';

    return 0;
}