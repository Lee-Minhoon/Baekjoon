#include <iostream>
#include <limits>
#include <cstring>

using namespace std;

const int INF = 0x3f3f3f3f;
const int MAX = 501;

pair<int, int> m[MAX];
int cache[MAX][MAX];

int DP(int start, int end)
{
    if (start == end) {
        return cache[start][end] = 0;
    }

    if (cache[start][end] != INF) {
        return cache[start][end];
    }

    for (int mid = start; mid < end; mid++) {
        int left = DP(start, mid);
        int right = DP(mid + 1, end);
        int temp = left + right + m[start].first * m[mid].second * m[end].second;
        cache[start][end] = min(cache[start][end], temp);
    }

    return cache[start][end];
}

int main(void)
{
    int n; cin >> n;

    memset(cache, 0x3f, sizeof(cache));
    for (int i = 1; i <= n; i++) {
        cin >> m[i].first >> m[i].second;
    }

    cout << DP(1, n);

    return 0;
}