#include<iostream>

using namespace std;

int result[100001];

void fact(int n)
{
    if (n == 1) {
        return;
    }
    if (n == 2 || n == 3) {
        cout << n << endl;
        return;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0 && result[i] == 0) {
            cout << i << endl;
            fact(n / i);
            return;
        }
    }
    cout << n << endl;
}

int main(void)
{
    for (int i = 2; i < 100001; i++) {
        if (result[i] == 1) continue;
        
        for (int j = i * 2; j < 100001; j += i) {
            result[j] = 1;
        }
    }

    int n; cin >> n;

    fact(n);
    
    return 0;
}