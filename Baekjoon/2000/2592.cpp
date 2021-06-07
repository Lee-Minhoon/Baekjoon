#include <iostream>

using namespace std;

int main(void)
{
    int avg = 0, mode;
    int cnt[100] = { 0, };
    int v = 0;

    for (int i = 0; i < 10; i++) {
        int temp; cin >> temp;
        avg += temp;
        cnt[temp / 10]++;
        if (v < cnt[temp / 10]) {
            v = cnt[temp / 10];
            mode = temp;
        }
    }

    avg /= 10;
    cout << avg << endl << mode;

    return 0;
}