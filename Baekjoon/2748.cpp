#include<iostream>

using namespace std;

int main(void)
{
    int n = 0; cin >> n;
    long long prev = 0, next = 1, res = 0, temp;

    if (n == 0) {
        cout << 0;
    }
    else if (n == 1) {
        cout << 1;
    }
    else {
        for (int i = 0; i <= n; i++) {
            res = prev;
            temp = prev;
            prev = next;
            next = temp + next;
        }
        cout << res;
    }

    return 0;
}