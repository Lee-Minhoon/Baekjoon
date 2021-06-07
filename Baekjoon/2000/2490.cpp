#include <iostream>

using namespace std;

char yut[5] = { 'D', 'C', 'B', 'A', 'E' };

int main(void)
{
    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            int temp; cin >> temp;
            sum += temp;
        }
        cout << yut[sum] << endl;
    }

    return 0;
}