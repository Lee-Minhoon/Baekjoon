#include<iostream>
#include<time.h>

using namespace std;

const int SIZE = 7;

string input;
int res;
bool visited[SIZE + 2][SIZE + 2];
pair<int, int> direction[4] = {
    {0, -1}, {0, 1},
    {1, 0}, {-1, 0}
};
int cy, cx;

// 초기화 함수
void init()
{
    cin >> input;
    // 현재좌표
    cy = 1, cx = 1;
    // 출발지점
    visited[1][1] = true;
    // 벽
    for (int i = 0; i < SIZE + 2; i++) {
        visited[0][i] = true; visited[i][0] = true;
        visited[8][i] = true; visited[i][8] = true;
    }
}

bool isPossible(int y, int x, int cnt, char dir)
{
    // 이미 방문한 곳이거나 벽이면 갈 수 없음
    if (visited[y][x]) return false;
    // 마지막 노드 전에 도착지점인 (7, 1)을 방문할 수 없음
    if (cnt != SIZE * SIZE - 2 && y == SIZE && x == 1) return false;
    // 주어진 입력값의 경로와 일치하는지 비교
    char restriction = input[cnt];
    if (restriction != '?' && restriction != dir) return false;
    // 모든 노드를 방문할 수 없게 되는 상황
    if (visited[y - 1][x] && visited[y + 1][x] && !visited[y][x - 1] && !visited[y][x + 1]) return false;
    if (!visited[y - 1][x] && !visited[y + 1][x] && visited[y][x - 1] && visited[y][x + 1]) return false;
    return true;
}

void dfs(int cnt)
{
    // 모든 좌표를 방문하고 7, 1에 도달해있다.
    if (cnt == SIZE * SIZE - 1 && cy == SIZE && cx == 1) {
        res++;
        return;
    }

    for (int i = 0; i < 4; i++) {
        int ny = cy + direction[i].first;
        int nx = cx + direction[i].second;
        // 해당 좌표로 이동할 수 있는지
        if (isPossible(ny, nx, cnt, "LRDU"[i])) {
            // 방문
            cy = cy + direction[i].first;
            cx = cx + direction[i].second;
            visited[ny][nx] = true;
            // 재귀호출
            dfs(cnt + 1);
            // 되돌아옴
            cy = cy - direction[i].first;
            cx = cx - direction[i].second;
            visited[ny][nx] = false;
        }
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    init();
    dfs(0);
    cout << res;

    return 0;
}