#include<iostream>

using namespace std;

int main(void)
{
    int n, m; cin >> n >> m;
    int j;
    int sum = 0, min = 0;
    bool flag;

    for (int i = n; i <= m; i++) {
        flag = true;
        j = 0;
        if (i == 1) {
            flag = false;
        }
        for (j = 2; (j * j) < i; j++) {
            if (i % j == 0) {
                flag = false;
            }
        }
        if (j * j == i) {
            flag = false;
        }

        if (flag) {
            sum += i;
            if (min == 0) {
                min = i;
            }
        }
    }

    if (sum != 0) {
        cout << sum << endl;
        cout << min;
    }
    else {
        cout << -1;
    }

    return 0;
}