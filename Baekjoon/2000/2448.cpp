#include <iostream>

using namespace std;

void star(int i, int j, int num, int mid)
{
	// ���� ��� �κа� �ϴ� �κ�
	int top = i / num * num, bot = top + num - 1;
	// ������κ����� �Ÿ�, �ϴ����κ����� �Ÿ�
	int dis = abs(top - i), rdis = abs(bot - i);
	// ���� ���� ������ �� (��� �κк��� �þ)
	int left = mid - dis, right = mid + dis;
	// ���� ���� ������ �� (��� �κк��� �پ��)
	int rleft = mid - rdis, rright = mid + rdis;
	if (num == 3) {
		rleft++; rright--;
	}

	// �ﰢ���� �纯 �ۿ� �ִٸ� ����
	if (j < left || j > right) cout << ' ';
	// �ﰢ�� ���� �߾� �Ʒ� �ﰢ��
	else if (dis >= num / 2 && j >= rleft && j <= rright) cout << ' ';
	// �ﰢ���� �纯
	else if (j == left || j == right) cout << '*';
	else {
		// ���� ���� �ﰢ���� �ϴ�
		if (num == 3) cout << '*';
		else {
			// �߾Ӱ��� �����ϰ� ��� ȣ��
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