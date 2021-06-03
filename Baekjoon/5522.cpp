#include <iostream>

using namespace std;

int main(void)
{
    int i = 5, sum = 0;
    
    while (i--) {
        int temp; cin >> temp;
        sum += temp;
    }

    cout << sum;

    return 0;
}