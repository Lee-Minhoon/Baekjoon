#include<iostream>
#include<vector>

using namespace std;

int main(void)
{
    int k; cin >> k;
    vector<int> stack;

    for (int i = 0; i < k; i++) {
        int temp; cin >> temp;
        if (temp == 0) stack.pop_back();
        else stack.push_back(temp);
    }

    int sum = 0;
    for (vector<int>::iterator it = stack.begin(); it < stack.end(); it++) {
        sum += *it;
    }

    cout << sum << endl;

    return 0;
}