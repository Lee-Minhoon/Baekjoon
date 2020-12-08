#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(void)
{
    int n, m; cin >> n >> m;
    int temp, j, sum = 0;
    vector<int> vec;
    vector<int>::iterator iter;

    for (int i = 0; i < m; i++) {
        cin >> temp;
        j = 1;
        while (temp * j <= n) {
            vec.push_back(temp * j);
            j++;
        }
    }

    sort(vec.begin(), vec.end());
    vec.erase(unique(vec.begin(), vec.end()), vec.end());

    for (iter = vec.begin(); iter < vec.end(); iter++) {
        sum += *iter;
    }

    cout << sum;

    return 0;
}