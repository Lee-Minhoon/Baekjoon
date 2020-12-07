#include<iostream>

using namespace std;

void IsItBig(int n, int m)
{
    if (n > m) {
        cout << "Yes" << "\n";
    }
    else {
        cout << "No" << "\n";
    }
}

int main(void)
{
    int n, m; cin >> n >> m;

    while (n != 0 && m != 0) {
        IsItBig(n, m);
        cin >> n >> m;
    }

    return 0;
}