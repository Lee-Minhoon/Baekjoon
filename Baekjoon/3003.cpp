#include <iostream>

using namespace std;

int chess[6] = { 1, 1, 2, 2, 2, 8 };

int main(void)
{
    for (int i = 0; i < 6; i++) {
        int temp; cin >> temp;
        cout << chess[i] - temp << ' ';
    }
    return 0;
}