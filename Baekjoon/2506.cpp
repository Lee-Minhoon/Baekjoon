#include <iostream>

using namespace std;

int main(void)
{
    int N, sum = 0; cin >> N;

    int pre = 1;
    while (N--) {
        int temp; cin >> temp;
        if (temp == 1) {
            sum += pre++;
        }
        else {
            pre = 1;
        }
    }

    cout << sum;

    return 0;
}