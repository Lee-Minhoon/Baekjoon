#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int arr[9];
vector<int> ans;
bool flag;

void dfs(int cnt, int v)
{
    if (cnt == 7) {
        int sum = 0;
        for (int i = 0; i < 7; i++) {
            sum += arr[ans[i]];
        }
        if (sum == 100) {
            flag = true;
            return;
        }
    }

    for (int i = v; i < 9; i++) {
        ans.push_back(i);
        dfs(cnt + 1, i + 1);
        if (flag) {
            return;
        }
        ans.pop_back();
    }
}

int main(void)
{   
    for (int i = 0; i < 9; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + 9);
    dfs(0, 0);

    for (int i = 0; i < 7; i++) {
        cout << arr[ans[i]] << ' ';
    }

    return 0;
}