#include<iostream>
#include<cmath>

using namespace std;

void move(int n, int start, int stop, int dst)
{
    if (n == 0) {
        return;
    }
    move(n - 1, start, dst, stop);
    cout << start << " " << dst << "\n";
    move(n - 1, stop, start, dst);
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; cin >> n;
    int cnt = pow(2, n) - 1;

    cout << cnt << "\n";
    move(n, 1, 2, 3);

    return 0;
}