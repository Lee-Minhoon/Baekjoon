#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

const int MAX = 501;

int cache[MAX][MAX];
int cost[MAX];
int psum[MAX];

int DP(int start, int end)
{
    // 합치는 비용 0 (하나의 파일을 합칠 수 없음)
    if (start == end) {
        return cache[start][end];
    }

    // 0이 아닌 경우 캐시 반환 (이미 최솟값이 갱신된 경우)
    if (cache[start][end] != 0) {
        return cache[start][end];
    }

    // 근접한 파일과 합치는 비용 (부분합을 더해주지 않아도 됨)
    if (end - start == 1) {
        cache[start][end] = cost[start] + cost[end];
        return cache[start][end];
    }

    // 왼쪽, 오른쪽 비용 중 가장 적은 비용 구함 (파일 간 거리가 2 이상 차이 날 경우)
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

    // 부분합과 더해 반환 (합치는 과정이 2번 이상 포함되기 때문)
    return cache[start][end] += psum[end] - psum[start - 1];
}

int main(void)
{
    int T; cin >> T;

    while (T--) {
        memset(cache, 0, sizeof(cache));
        // 파일의 개수 K
        int K; cin >> K;
        for (int i = 1; i <= K; i++) {
            // 합치는 비용
            cin >> cost[i];
            // 부분합
            psum[i] = psum[i - 1] + cost[i];
        }
        cout << DP(1, K) << '\n';
    }

    return 0;
}