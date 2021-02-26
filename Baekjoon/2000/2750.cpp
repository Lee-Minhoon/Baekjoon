#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; cin >> n;
    vector<int> vec;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        vec.push_back(temp);
    }

    sort(vec.begin(), vec.end());
    for (vector<int>::iterator iter = vec.begin(); iter < vec.end(); iter++) {
        cout << *iter << "\n";
    }

    return 0;
}