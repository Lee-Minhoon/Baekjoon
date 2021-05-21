#include<iostream>

using namespace std;

#define SIZE 9

int n, m;
int res[SIZE]; // 수열을 출력해야하니까 임시저장할 배열
bool visited[SIZE]; //불리언 배열

void dfs(int cnt) // 1
{
    // 기저사례에 걸림 cnt가 m이랑 같애 m이 4개뽑는건데 현재 뽑은 노드도 4개야 그러니까 기저사례
    if (cnt == m) {
        // 그 수열을 다 출력한담에
        for (int i = 0; i < m; i++) cout << res[i] << " ";
        cout << "\n";
        // 리턴해 자기를 부른곳으로
        return;
    }
    // i가 4가됨
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) { // 4
            visited[i] = true; //1번을 방문등록해놔
            res[cnt] = i; // cnt 0번에 1을 저장해놓고
            dfs(cnt + 1); // 기저사례에 걸리고 리턴됨
            visited[i] = false; // 3번을 방무해제함
        }
    }
    // 함수가 끝나서 다시 리턴되 자기를 부른곳으로 스택에 dfs(0), dfs(1), dfs(2)<- 대기중이야
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 1~n까지의 숫자중에 중복없이 m개를 뽑는 순열
    cin >> n >> m;

    dfs(0);

    return 0;
}