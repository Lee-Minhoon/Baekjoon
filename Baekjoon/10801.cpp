#include <iostream>

using namespace std;

int main(void)
{
    int A[10], B[10];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 10; j++) {
            if (i == 0) {
                cin >> A[j];
            }
            else {
                cin >> B[j];
            }
        }
    }

    int AS = 0, BS = 0;

    for (int i = 0; i < 10; i++) {
        if (A[i] > B[i]) {
            AS++;
        }
        else if (B[i] > A[i]) {
            BS++;
        }
    }

    if (AS > BS) {
        cout << "A";
    }
    else if (BS > AS) {
        cout << "B";
    }
    else {
        cout << "D";
    }

    return 0;
}