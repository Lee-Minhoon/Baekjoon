#include <iostream>

using namespace std;

int main(void)
{
    int n; cin >> n;
    string pre, cur; cin >> pre >> cur;

    if (n % 2 == 0) {
        if (pre == cur) {
            cout << "Deletion succeeded";
        }
        else {
            cout << "Deletion failed";
        }
        return 0;
    }
    else {
        for (int i = 0; i < pre.length(); i++) {
            if (pre[i] == cur[i]) {
                cout << "Deletion failed";
                return 0;
            }
        }
        cout << "Deletion succeeded";
        return 0;
    }
}