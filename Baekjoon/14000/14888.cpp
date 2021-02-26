#include<iostream>
#include<vector>

using namespace std;

#define FOUR 4

int n;
vector<int> nums;
int operators[FOUR];
vector<int> stack;
int maximum = -1000000000;
int minimum = +1000000000;

void calc()
{
    int res = nums[0];
    for (int i = 0; i < n - 1; i++) {
        if (stack[i] == 0) res += nums[i + 1];
        else if (stack[i] == 1) res -= nums[i + 1];
        else if (stack[i] == 2) res *= nums[i + 1];
        else res /= nums[i + 1];
    }
    if (maximum < res) {
        maximum = res;
    }
    if (minimum > res){
        minimum = res;
    }
}

void dfs(int cnt)
{
    if (cnt == n - 1) {
        calc();
    }
    for (int i = 0; i < FOUR; i++) {
        if (operators[i] > 0) {
            operators[i]--;
            stack.push_back(i);
            dfs(cnt + 1);
            operators[i]++;
            stack.pop_back();
        }
    }
}

int main(void)
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        int temp; cin >> temp;
        nums.push_back(temp);
    }
    for (int i = 0; i < FOUR; i++) {
        cin >> operators[i];
    }

    dfs(0);

    cout << maximum << endl << minimum;

    return 0;
}