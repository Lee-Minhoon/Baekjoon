#include<iostream>

using namespace std;

int main(void)
{
    int sum = 0, max = 0;
    int p, m;
    
    for (int i = 0; i < 4; i++) {
        cin >> m >> p;
        sum -= m; sum += p;
        if (sum > max) {
            max = sum;
        }
    }

    cout << max;

    return 0;
}