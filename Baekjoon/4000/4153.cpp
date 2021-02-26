#include<iostream>
#include<algorithm>

using namespace std;

int main(void)
{
    int n[3]; cin >> n[0] >> n[1] >> n[2];

    while (n[0] != 0 && n[1] != 0 && n[2] != 0) {
        sort(n, n + 3);
        if (n[0] * n[0] + n[1] * n[1] == n[2] * n[2]) {
            cout << "right\n";
        }
        else {
            cout << "wrong\n";
        }
        cin >> n[0] >> n[1] >> n[2];
    }

    return 0;
}