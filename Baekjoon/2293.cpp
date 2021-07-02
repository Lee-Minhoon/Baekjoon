#include <iostream>

using namespace std;

const int MAX = 10001;

int cache[MAX];

int main(void)
{
    int n, k; cin >> n >> k;

    cache[0] = 1;
    for (int i = 0; i < n; i++) {
        int coin; cin >> coin;
        for (int j = coin; j <= k; j++) {
            cache[j] += cache[j - coin];
        }
    }

    cout << cache[k];

    return 0;
}