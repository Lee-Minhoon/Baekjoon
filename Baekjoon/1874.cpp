#include<iostream>
#include<vector>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; cin >> n;
    vector<int> stack(n);
    vector<char> res;
    int top = 0;
    bool chk = true;

    for (int i = 0; i < n; i++) {
        int num; cin >> num;
        while (top < num) {
            stack.push_back(++top);
            res.push_back('+');
        }
        if (stack.back() == num) {
            stack.pop_back();
            res.push_back('-');
        }
        else {
            chk = false;
        }
    }

    if (chk) {
        for (vector<char>::iterator it = res.begin(); it < res.end(); it++) {
            cout << *it << "\n";
        }
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}