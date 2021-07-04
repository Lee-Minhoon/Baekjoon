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
    // �縰������� �ƴ��� �̹� �Ǵ� �Ǿ��ٸ� �� ���� ��ȯ
    if (cache[a][b] != -1) {
        return cache[a][b];
    }

    // ���� �ʴٸ� �縰����� �ƴ�
    if (nums[a] != nums[b]) {
        return cache[a][b] = 0;
    }
    // ���ٸ� S, E�� ������ �ٿ� ��� ȣ��
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
        // �ڱ� �ڽ��� �縰���
        cache[i][i] = 1;
        // ������ ���� ���ٸ� �縰���
        if (nums[i] == nums[i - 1]) {
            cache[i - 1][i] = 1;
        }
        // �ƴ϶�� �縰����� �ƴ�
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