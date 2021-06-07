#include <iostream>

using namespace std;

int main(void)
{
    int L, P; cin >> L >> P;

    for (int i = 0; i < 5; i++) {
        int temp; cin >> temp;
        cout << temp - L * P << ' ';
    }

    return 0;
}