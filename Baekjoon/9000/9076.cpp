#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int T; cin >> T;

    while (T--) {
        int arr[5];
        for (int i = 0; i < 5; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + 5);
        if (arr[3] - arr[1] >= 4) {
            cout << "KIN" << endl;
        }
        else {
            cout << arr[3] + arr[2] + arr[1] << endl;
        }
    }

    return 0;
}