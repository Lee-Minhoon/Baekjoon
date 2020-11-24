#include<iostream>
#include<cmath>

using namespace std;

int main(void)
{
    int n, res = 0;

    for (int i = 0; i < 5; i++) {
        cin >> n;
        res += pow(n, 2);
    }

    cout << res % 10;

    return 0;
}