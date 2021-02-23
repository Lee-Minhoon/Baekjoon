#include<iostream>
#include<vector>

using namespace std;

int res[1000001];

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; cin >> n;
    vector<int> stack(n);
    for (int i = 0; i < n; i++) cin >> stack[i];
    vector<int> index;
    vector<int> res(n);

    index.push_back(0);
    for (int i = 1; i < n; i++) {
        if (index.empty()) {
            index.push_back(i);
        }
        else {
            while (!index.empty() && stack[index.back()] < stack[i]) {
                res[index.back()] = stack[i];
                index.pop_back();
            }
            index.push_back(i);
        }
    }

    for (int i = 0; i < n; i++) {
        if (res[i] == 0) cout << "-1 ";
        else cout << res[i] << " ";
    }

    return 0;
}