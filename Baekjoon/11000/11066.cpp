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
    // ��ġ�� ��� 0 (�ϳ��� ������ ��ĥ �� ����)
    if (start == end) {
        return cache[start][end];
    }

    // 0�� �ƴ� ��� ĳ�� ��ȯ (�̹� �ּڰ��� ���ŵ� ���)
    if (cache[start][end] != 0) {
        return cache[start][end];
    }

    // ������ ���ϰ� ��ġ�� ��� (�κ����� �������� �ʾƵ� ��)
    if (end - start == 1) {
        cache[start][end] = cost[start] + cost[end];
        return cache[start][end];
    }

    // ����, ������ ��� �� ���� ���� ��� ���� (���� �� �Ÿ��� 2 �̻� ���� �� ���)
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

    // �κ��հ� ���� ��ȯ (��ġ�� ������ 2�� �̻� ���ԵǱ� ����)
    return cache[start][end] += psum[end] - psum[start - 1];
}

int main(void)
{
    int T; cin >> T;

    while (T--) {
        memset(cache, 0, sizeof(cache));
        // ������ ���� K
        int K; cin >> K;
        for (int i = 1; i <= K; i++) {
            // ��ġ�� ���
            cin >> cost[i];
            // �κ���
            psum[i] = psum[i - 1] + cost[i];
        }
        cout << DP(1, K) << '\n';
    }

    return 0;
}