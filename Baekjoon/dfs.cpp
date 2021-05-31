#include<iostream>

using namespace std;

const int SIZE = 7;

string input; // ��ǲ
int res; // ����� �� üũ
bool visited[8][8]; // �湮�ߴ��� ���
pair<int, int> direction[4] = {
    // y , x
    {0, -1}, // L 0
    {0, 1}, // R 1
    {1, 0}, // D 2
    {-1, 0} // U 3
};
int cy, cx; // ���� ��ġ
char direction_name[4] = { 'L', 'R', 'D', 'U' }; // ���� �̸�

bool isPossible(int y, int x) {
    // ���� ������ �迭�� ������ ����� �ȵ�
    if (y < 1 || x < 1 || y > SIZE || x > SIZE) return false;
    // �湮�ߴ����̸� �ȵ�
    if (visited[y][x]) return false;
    return true;
}

void dfs(int cnt) // 1
{
    // ������ʿ� �ɸ� cnt�� m�̶� ���� m�� 4���̴°ǵ� ���� ���� ��嵵 4���� �׷��ϱ� �������
    if (cnt == SIZE * SIZE - 1 && cy == SIZE && cx == 1) {
        res++;
        return;
    }
    // ���� �� �����ϴ� ����
    char restriction = input[cnt];
    for (int i = 0; i < 4; i++) {
        // cur.first = ���� y��ǥ, direction[i].frist = ������ y��ǥ
        // cur.second = ���� x��ǥ, direction[i].second = ������ x��ǥ
        int ny = cy + direction[i].first;
        int nx = cx + direction[i].second;
        // �ش� ��ǥ�� �湮 ��������, ���� �� �����ϴ� ����� ��ġ�ϴ���
        if (isPossible(ny, nx) && (restriction == '?' || restriction == direction_name[i])) {
            // ���� ��ġ�� �̵���Ŵ
            cy = cy + direction[i].first;
            cx = cx + direction[i].second;
            // ���� ��ġ�� �湮�ߴٰ� ���
            visited[ny][nx] = true;
            // ��� ȣ��
            dfs(cnt + 1);
            // ��� ȣ�ⳡ���� �ٽ� ������ġ�� �������� �ǵ�����
            cy = cy - direction[i].first;
            cx = cx - direction[i].second;
            // �湮 ��� ����
            visited[ny][nx] = false;
        }
    }
    // �Լ��� ������ �ٽ� ���ϵ� �ڱ⸦ �θ������� ���ÿ� dfs(0), dfs(1), dfs(2)<- ������̾�
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // input�� �޾ƿ´�.
    cin >> input;
    // ���� ��ǥ 1, 1
    cy = 1, cx = 1;
    // 1, 1�湮
    visited[1][1] = true;

    dfs(0);

    cout << res;

    return 0;
}