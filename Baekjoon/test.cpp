#include<iostream>
#include<vector>

using namespace std;

void pick(int n, vector<int>& picked, int toPick)
{
    if (toPick == 0) {
        for (vector<int>::iterator it = picked.begin(); it < picked.end(); it++) {
            cout << *it << " ";
        }
        cout << endl;
    }
    int smallest = picked.empty() ? 1 : picked.back() + 1;
    for (int next = smallest; next <= n; ++next) {
        picked.push_back(next);
        pick(n, picked, toPick - 1);
        picked.pop_back();
    }
}

int main(void)
{
    int n, m; cin >> n >> m;
    vector<int> nums;

    pick(n, nums, m);

    return 0;
}