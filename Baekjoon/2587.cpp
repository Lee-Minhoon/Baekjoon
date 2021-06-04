#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int arr[5];

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + 5);

    int avg = 0;
    for (int i = 0; i < 5; i++) {
        avg += arr[i];
    }

    cout << avg / 5 << endl << arr[2];

    return 0;
}