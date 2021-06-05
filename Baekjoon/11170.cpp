#include <iostream>
#include <string>

using namespace std;

int countZero(int A, int B)
{
    int cnt = 0;

    for (int i = A; i <= B; i++) {
        string s = to_string(i);
        for (auto j : s) {
            if (j == '0') {
                cnt++;
            }
        }
    }

    return cnt;
}

int main(void)
{
    int T; cin >> T;

    while (T--) {
        int N, M; cin >> N >> M;
        cout << countZero(N, M) << '\n';
    }

    return 0;
}