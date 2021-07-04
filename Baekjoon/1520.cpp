#include <iostream>
#include <cstring>

using namespace std;

const int MAX = 501;
const pair<int, int> direction[4] = { {-1, 0}, {1, 0}, {0, -1}, {0, 1} };

int M, N;
int map[MAX][MAX];
int cache[MAX][MAX];

int DFS(int y, int x)
{
    // 기저 사례 (목적지에 도달)
    if (y == M && x == N) {
        return 1;
    }

    // 방문하지 않은 지점이라면 계속 탐색
    if (cache[y][x] == -1) {
        cache[y][x] = 0;
        for (int i = 0; i < 4; i++) {
            int ny = y + direction[i].first;
            int nx = x + direction[i].second;
            if (map[ny][nx] != 0 && map[y][x] > map[ny][nx]) {
                cache[y][x] += DFS(ny, nx);
            }
        }
    }

    // 방문한 곳이라면 해당 좌표에서 목적지까지 도달할 수 있는 경로의 개수 반환
    return cache[y][x];
}

int main(void)
{
    cin >> M >> N;

    memset(cache, -1, sizeof(cache));
    for (int i = 1; i <= M; i++) {
        for (int j = 1; j <= N; j++) {
            cin >> map[i][j];
        }
    }

    cout << DFS(1, 1);

    return 0;
}