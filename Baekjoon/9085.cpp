#include <iostream>

using namespace std;

int main(void)
{
    int T; cin >> T;

    while (T--) {
        int N, sum = 0; cin >> N;
        while (N--) {
            int temp; cin >> temp;
            sum += temp;
        }
        cout << sum << endl;
    }

    return 0;
}