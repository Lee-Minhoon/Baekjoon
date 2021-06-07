#include <iostream>

using namespace std;

int main(void)
{
    int arr[1000], idx = 0, num = 1;

    while (idx < 1000) {
        for (int i = 0; i < num; i++) {
            arr[idx++] = num;
            if (idx >= 1000) {
                break;
            }
        }
        num++;
    }

    int A, B; cin >> A >> B;
    int sum = 0;

    for (int i = A - 1; i < B; i++) {
        sum += arr[i];
    }

    cout << sum;

    return 0;
}