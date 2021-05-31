#include<iostream>

using namespace std;

const int SIZE = 7;

string input; // 인풋
int res; // 경우의 수 체크
bool visited[8][8]; // 방문했는지 기록
pair<int, int> direction[4] = {
    // y , x
    {0, -1}, // L 0
    {0, 1}, // R 1
    {1, 0}, // D 2
    {-1, 0} // U 3
};
int cy, cx; // 현재 위치
char direction_name[4] = { 'L', 'R', 'D', 'U' }; // 방향 이름

bool isPossible(int y, int x) {
    // 지금 갈곳이 배열의 범위를 벗어나면 안됨
    if (y < 1 || x < 1 || y > SIZE || x > SIZE) return false;
    // 방문했던곳이면 안됨
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
    // 현재 꼭 가야하는 방향
    char restriction = input[cnt];
    for (int i = 0; i < 4; i++) {
        // cur.first = 현재 y좌표, direction[i].frist = 방향의 y좌표
        // cur.second = 현재 x좌표, direction[i].second = 방향의 x좌표
        int ny = cy + direction[i].first;
        int nx = cx + direction[i].second;
        // 해당 좌표가 방문 가능한지, 현재 꼭 가야하는 방향과 일치하는지
        if (isPossible(ny, nx) && (restriction == '?' || restriction == direction_name[i])) {
            // 현재 위치를 이동시킴
            cy = cy + direction[i].first;
            cx = cx + direction[i].second;
            // 현재 위치를 방문했다고 기록
            visited[ny][nx] = true;
            // 재귀 호출
            dfs(cnt + 1);
            // 재귀 호출끝나면 다시 현재위치를 이전으로 되돌리고
            cy = cy - direction[i].first;
            cx = cx - direction[i].second;
            // 방문 기록 지움
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
    // 시작 좌표 1, 1
    cy = 1, cx = 1;
    // 1, 1방문
    visited[1][1] = true;

    dfs(0);

    cout << res;

    return 0;
}