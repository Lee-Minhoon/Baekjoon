#include<iostream>

using namespace std;

int main(void)
{
    int n; cin >> n;
    int temp;
    int sum = 0;
    int res = 0;

    for (int i = n - 63; i < n; i++) {
        temp = i;
        sum = temp;
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
        if (sum == n) {
            res = i;
            break;
        }
    }

    cout << res;

    return 0;
}