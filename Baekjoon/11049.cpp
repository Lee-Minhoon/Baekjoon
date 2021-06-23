#include <iostream>

using namespace std;

const int MAX = 501;

pair<int, int> m[MAX];
int cache[MAX][MAX];

int DP(int start, int end)
{
    if (start == end) {
        return cache[start][end];
    }

    if (cache[start][end] != 0) {
        return cache[start][end];
    }

    if (end - start == 1) {
        cache[start][end] = m[start].first * m[start].second * m[end].first;;
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

    return cache[start][end] += psum[end] - psum[start - 1];
}

int main(void)
{
    int n; cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> m[i].first >> m[i].second;
    }

    DP(1, n);

    return 0;
}