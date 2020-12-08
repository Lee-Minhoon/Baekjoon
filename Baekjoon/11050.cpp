#include<iostream>

using namespace std;

int fact(int num)
{
    if (num > 1 && num != 0) {
        return num * fact(num - 1);
    }
    else {
        return 1;
    }
}

int main(void)
{
    int n, k; cin >> n >> k;

    cout << fact(n) / (fact(k) * fact(n - k));

    return 0;
}