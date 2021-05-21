#include<iostream>

using namespace std;

const int SIZE = 7;

string input;
int res;
bool visited[8][8]; //불리언 배열
pair<int, int> direction[4] = {
    // y , x
    {0, -1}, // L 0
    {0, 1}, // R 1
    {1, 0}, // D
    {-1, 0} // U 3
};
int cy, cx;
char direction_name[4] = { 'L', 'R', 'D', 'U' };

bool isPossible(int y, int x) {
    // 지금 갈곳이 배열의 범위를 벗어나면 안되잖아
    if (y < 1 || x < 1 || y > SIZE || x > SIZE) return false;
    if (visited[y][x]) return false;
    return true;
}

void dfs(int cnt) // 1
{
    // 기저사례에 걸림 cnt가 m이랑 같애 m이 4개뽑는건데 현재 뽑은 노드도 4개야 그러니까 기저사례
    if (cnt == SIZE * SIZE - 1 && cy == SIZE && cx == 1) {
        res++;
        return;
    }
    // i가 4가됨
    char restriction = input[cnt];
    for (int i = 0; i < 4; i++) {
        // cur.first = 현재 y좌표, direction[i].frist = 방향의 y좌표
        // cur.second = 현재 x좌표, direction[i].second = 방향의 x좌표
        int ny = cy + direction[i].first;
        int nx = cx + direction[i].second;
        //(restriction == '?' || restriction == direction_name[i])
        if (isPossible(ny, nx) && (restriction == '?' || restriction == direction_name[i])) {
            cy = cy + direction[i].first;
            cx = cx + direction[i].second;
            visited[ny][nx] = true;
            dfs(cnt + 1);
            cy = cy - direction[i].first;
            cx = cx - direction[i].second;
            visited[ny][nx] = false;
        }
    }
    // 함수가 끝나서 다시 리턴되 자기를 부른곳으로 스택에 dfs(0), dfs(1), dfs(2)<- 대기중이야
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // input값 받아온다.
    cin >> input;
    cy = 1, cx = 1;
    visited[1][1] = true;

    dfs(0);

    cout << res;

    return 0;
}