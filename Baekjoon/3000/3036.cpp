#include<iostream>
#include<vector>

using namespace std;

int gcd(int a, int b)
{
    return b ? gcd(b, a % b) : a;
}

int main(void)
{
    int n; cin >> n;
    vector<int> num(n);

    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    for (int i = 1; i < n; i++) {
        int dv = gcd(num[0], num[i]);
        cout << num[0] / dv << "/" << num[i] / dv << endl;
    }

    return 0;
}