#include <iostream>

using namespace std;

int main(void)
{
    int sum = 0;

    for (int i = 0; i < 4; i++) {
        int t; cin >> t;
        sum += t;
    }
    
    cout << sum / 60 << '\n';
    cout << sum % 60;

    return 0;
}