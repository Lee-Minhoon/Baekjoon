#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

const int MAX = 2001;

int N, M, S, E;
int nums[MAX];
int cache[MAX][MAX];

int func(int a, int b)
{
    // 펠린드롬인지 아닌지 이미 판단 되었다면 그 값을 반환
    if (cache[a][b] != -1) {
        return cache[a][b];
    }

    // 같지 않다면 펠린드롬이 아님
    if (nums[a] != nums[b]) {
        return cache[a][b] = 0;
    }
    // 같다면 S, E의 범위를 줄여 재귀 호출
    else {
        return cache[a][b] = func(a + 1, b - 1);
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    memset(cache, -1, sizeof(cache));

    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> nums[i];
        // 자기 자신은 펠린드롬
        cache[i][i] = 1;
        // 인접한 수와 같다면 펠린드롬
        if (nums[i] == nums[i - 1]) {
            cache[i - 1][i] = 1;
        }
        // 아니라면 펠린드롬이 아님
        else {
            cache[i - 1][i] = 0;
        }
    }

    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> S >> E;
        cout << func(S, E) << '\n';
    }

    return 0;
}