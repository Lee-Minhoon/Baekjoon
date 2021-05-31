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

// �ʱ�ȭ �Լ�
void init()
{
    cin >> input;
    // ������ǥ
    cy = 1, cx = 1;
    // �������
    visited[1][1] = true;
    // ��
    for (int i = 0; i < SIZE + 2; i++) {
        visited[0][i] = true; visited[i][0] = true;
        visited[8][i] = true; visited[i][8] = true;
    }
}

bool isPossible(int y, int x, int cnt, char dir)
{
    // �̹� �湮�� ���̰ų� ���̸� �� �� ����
    if (visited[y][x]) return false;
    // ������ ��� ���� ���������� (7, 1)�� �湮�� �� ����
    if (cnt != SIZE * SIZE - 2 && y == SIZE && x == 1) return false;
    // �־��� �Է°��� ��ο� ��ġ�ϴ��� ��
    char restriction = input[cnt];
    if (restriction != '?' && restriction != dir) return false;
    // ��� ��带 �湮�� �� ���� �Ǵ� ��Ȳ
    if (visited[y - 1][x] && visited[y + 1][x] && !visited[y][x - 1] && !visited[y][x + 1]) return false;
    if (!visited[y - 1][x] && !visited[y + 1][x] && visited[y][x - 1] && visited[y][x + 1]) return false;
    return true;
}

void dfs(int cnt)
{
    // ��� ��ǥ�� �湮�ϰ� 7, 1�� �������ִ�.
    if (cnt == SIZE * SIZE - 1 && cy == SIZE && cx == 1) {
        res++;
        return;
    }

    for (int i = 0; i < 4; i++) {
        int ny = cy + direction[i].first;
        int nx = cx + direction[i].second;
        // �ش� ��ǥ�� �̵��� �� �ִ���
        if (isPossible(ny, nx, cnt, "LRDU"[i])) {
            // �湮
            cy = cy + direction[i].first;
            cx = cx + direction[i].second;
            visited[ny][nx] = true;
            // ���ȣ��
            dfs(cnt + 1);
            // �ǵ��ƿ�
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