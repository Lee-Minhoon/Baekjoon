#include <iostream>

using namespace std;

int nums[2001];

int main(void)
{
    int N; cin >> N;

    while (N--) {
        int temp; cin >> temp;
        nums[temp + 1000]++;
    }

    for (int i = 0; i < 2001; i++) {
        if (nums[i] != 0) {
            cout << i - 1000 << ' ';
        }
    }

    return 0;
}