#include<iostream>
#include<vector>

using namespace std;

int main(void)
{
    int n, k; cin >> n >> k;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        v[i] = i + 1;
    }

    int size = v.size();
    int idx = 0;
    cout << "<";
    while (size > 0) {
        idx = (idx + k - 1) % size;
        if (size == 1) cout << v[idx] << ">";
        else cout << v[idx] << ", ";
        v.erase(v.begin() + idx);
        size = v.size();
    }

    return 0;
}