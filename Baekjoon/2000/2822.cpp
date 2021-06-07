#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    pair<int, int> arr[8];
    for (int i = 0; i < 8; i++) {
        int temp; cin >> temp;
        arr[i].first = temp; arr[i].second = i;
    }
    sort(arr, arr + 8);

    int sum = 0;
    vector<int> idx;
    for (int i = 3; i < 8; i++) {
        sum += arr[i].first;
        idx.push_back(arr[i].second);
    }
    cout << sum << endl;

    sort(idx.begin(), idx.end());
    for (auto i : idx) {
        cout << i + 1 << ' ';
    }

    return 0;
}