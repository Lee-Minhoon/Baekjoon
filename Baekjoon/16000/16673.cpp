#include<iostream>

using namespace std;

int main(void)
{
    int c, k, p; cin >> c >> k >> p;
    int total = 0;

    for (int i = 1; i <= c; i++) {
        total += i * k + i * i * p;
    }

    cout << total;

    return 0;
}