#include <iostream>

using namespace std;

int main(void)
{
    int arr[8];
    bool b, seq = true;

    cin >> arr[0];
    if (arr[0] == 1 || arr[0] == 8) {
        arr[0] == 1 ? b = true : b = false;
        for (int i = 1; i < 8; i++) {
            cin >> arr[i];
            if (b && arr[i] != arr[i - 1] + 1) {
                seq = false;
            }
            if (!b && arr[i] != arr[i - 1] - 1) {
                seq = false;
            }
        }
    }
    else {
        seq = false;
    }

    if (!seq) {
        cout << "mixed";
    }
    else {
        b ? cout << "ascending" : cout << "descending";
    }

    return 0;
}