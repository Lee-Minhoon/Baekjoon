#include <iostream>

using namespace std;

int main(void)
{
    int N, K, ans = 0; cin >> N >> K;

    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            K--;
        }
        if (K == 0) {
            ans = i;
            break;
        }
    }

    cout << ans;

    return 0;
}