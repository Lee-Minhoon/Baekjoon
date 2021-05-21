#include<iostream>

using namespace std;

#define SIZE 9

int n, m;
int res[SIZE]; // ������ ����ؾ��ϴϱ� �ӽ������� �迭
bool visited[SIZE]; //�Ҹ��� �迭

void dfs(int cnt) // 1
{
    // ������ʿ� �ɸ� cnt�� m�̶� ���� m�� 4���̴°ǵ� ���� ���� ��嵵 4���� �׷��ϱ� �������
    if (cnt == m) {
        // �� ������ �� ����Ѵ㿡
        for (int i = 0; i < m; i++) cout << res[i] << " ";
        cout << "\n";
        // ������ �ڱ⸦ �θ�������
        return;
    }
    // i�� 4����
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) { // 4
            visited[i] = true; //1���� �湮����س�
            res[cnt] = i; // cnt 0���� 1�� �����س���
            dfs(cnt + 1); // ������ʿ� �ɸ��� ���ϵ�
            visited[i] = false; // 3���� �湫������
        }
    }
    // �Լ��� ������ �ٽ� ���ϵ� �ڱ⸦ �θ������� ���ÿ� dfs(0), dfs(1), dfs(2)<- ������̾�
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 1~n������ �����߿� �ߺ����� m���� �̴� ����
    cin >> n >> m;

    dfs(0);

    return 0;
}