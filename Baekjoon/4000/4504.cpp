#include <iostream>

using namespace std;

int main(void)
{
    int n; cin >> n;

    int num; cin >> num;
    while (num != 0) {
        if (num % n == 0) {
            printf("%d is a multiple of %d.\n", num, n);
        }
        else {
            printf("%d is NOT a multiple of %d.\n", num, n);
        }
        cin >> num;
    }

    return 0;
}