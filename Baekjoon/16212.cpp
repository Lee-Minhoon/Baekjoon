#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(void)
{
    int n; cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());

    vector<int>::iterator it;

    for (it = v.begin(); it < v.end(); it++) {
        cout << *it << ' ';
    }

    return 0;
}