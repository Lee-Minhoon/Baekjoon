#include<iostream>
#include<queue>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    priority_queue<int, vector<int>, greater<int>> pqMax;
    priority_queue<int> pqMin;

    int n; cin >> n;

    while (n--) {
        int i; cin >> i;

        if (pqMin.empty() || pqMin.top() >= i) {
            pqMin.push(i);
            if (pqMin.size() > pqMax.size() + 1) {
                pqMax.push(pqMin.top());
                pqMin.pop();
            }
        }
        else if (pqMax.empty() || pqMax.top() <= i) {
            pqMax.push(i);
            if (pqMax.size() > pqMin.size()) {
                pqMin.push(pqMax.top());
                pqMax.pop();
            }
        }
        else {
            if (pqMin.size() <= pqMax.size()) pqMin.push(i);
            else pqMax.push(i);
        }

        cout << pqMin.top() << '\n';
    }

    return 0;
}