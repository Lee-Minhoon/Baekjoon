#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

int printed(int num, queue<pair<int, int>>& q, vector<int>& imps)
{
    int order = 1;
    while (true) {
        if (q.front().second == imps.front()) {
            if (q.front().first == num) {
                return order;
            }
            q.pop();
            imps.erase(imps.begin());
            order++;
        }
        else {
            q.push(q.front());
            q.pop();
        }
    }
}

int main(void)
{
    int t; cin >> t;

    for (int i = 0; i < t; i++) {
        int n, num; cin >> n >> num;
        queue<pair<int, int>> q;
        vector<int> imps;
        for (int j = 0; j < n; j++) {
            int imp; cin >> imp;
            q.push(pair(j, imp));
            imps.push_back(imp);
        }
        sort(imps.begin(), imps.end(), greater<>());
        cout << printed(num, q, imps) << "\n";
    }

    return 0;
}