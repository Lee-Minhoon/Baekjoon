#include <iostream>
#include <algorithm>

using namespace std;

const int MAX = 501;

int cache[MAX][MAX];
int cost[MAX];
int psum[MAX];

int DP(int start, int end)
{
    if (start == end) {
        return cache[start][end];
    }

    if (cache[start][end] != 0) {
        return cache[start][end];
    }

    if (end - start == 1) {
        cache[start][end] = cost[start] + cost[end];
        return cache[start][end];
    }

    for (int mid = start; mid < end; mid++) {
        int left = DP(start, mid);
        int right = DP(mid + 1, end);
        if (!cache[start][end]) {
            cache[start][end] = left + right;
        }
        else {
            cache[start][end] = min(cache[start][end], left + right);
        }
    }

    return cache[start][end] = psum[end] - psum[start - 1];
}

int main(void)
{
    int T; cin >> T;

    while (T--) {
        int K; cin >> K;
        for (int i = 1; i <= K; i++) {
            cin >> cost[i];
            psum[i] = psum[i - 1] + cost[i];
        }
        cout << DP(1, K) << '\n';
    }

    return 0;
}