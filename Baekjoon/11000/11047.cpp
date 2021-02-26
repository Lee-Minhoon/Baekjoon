#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(void)
{
    int n, k; cin >> n >> k;
    vector<int> vec;
    int count = 0;

    int temp;
    for (int i = 0; i < n; i++) {
        cin >> temp; vec.push_back(temp);
    }

    sort(vec.rbegin(), vec.rend());

    for (vector<int>::iterator iter = vec.begin(); iter < vec.end(); iter++) {
        if (k >= * iter) {
            count += k / *iter;
            k -= *iter * (k / *iter);
        }
    }

    cout << count;

    return 0;
}