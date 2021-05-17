#include <iostream>

using namespace std;

void star(int i, int j, int num, int mid)
{
	// 제일 상단 부분과 하단 부분
	int top = i / num * num, bot = top + num - 1;
	// 상단으로부터의 거리, 하단으로부터의 거리
	int dis = abs(top - i), rdis = abs(bot - i);
	// 왼쪽 끝과 오른쪽 끝 (상단 부분부터 늘어남)
	int left = mid - dis, right = mid + dis;
	// 왼쪽 끝과 오른쪽 끝 (상단 부분부터 줄어듦)
	int rleft = mid - rdis, rright = mid + rdis;
	if (num == 3) {
		rleft++; rright--;
	}

	// 삼각형의 양변 밖에 있다면 공백
	if (j < left || j > right) cout << ' ';
	// 삼각형 안의 중앙 아래 삼각형
	else if (dis >= num / 2 && j >= rleft && j <= rright) cout << ' ';
	// 삼각형의 양변
	else if (j == left || j == right) cout << '*';
	else {
		// 제일 작은 삼각형의 하단
		if (num == 3) cout << '*';
		else {
			// 중앙값을 갱신하고 재귀 호출
			if (dis >= num / 2 && j < mid) mid -= (num / 2);
			else if (dis >= num / 2 && j > mid) mid += (num / 2);
			star(i, j, num / 2, mid);
		}
	}
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N; cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N * 2 - 1; j++) {
			star(i, j, N, (N * 2 - 1) / 2);
		}
		cout << '\n';
	}

	return 0;
}