#include<iostream>

using namespace std;

int main(void)
{
    int n, m, k; cin >> n >> m >> k;

    int tmp = min(n / 2, m);

    int sur = n + m - (2 * tmp + tmp);

    if (k <= sur) cout << tmp;
    else {
        tmp = tmp - ((k - sur + 2) / 3);
        cout << tmp;
    }

    return 0;
}