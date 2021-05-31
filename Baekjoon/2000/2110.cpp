#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, c;
vector<int> homes;

// �ش� �Ÿ���ŭ ���鼭 �������� ��ġ�� ��������
bool isPossible(int dist)
{
	int cnt = 1;

	int prev = homes[0];
	for (int i = 1; i < n; i++) {
		int curr = homes[i];
		if (curr - prev >= dist) {
			cnt++;
			prev = homes[i];
		}
	}

	if (cnt >= c) {
		return true;
	}
	return false;
}

int binarySearch()
{
	// ���� ����� �Ÿ�
	int start = 1;
	// ���� �� �Ÿ�
	int end = homes[n - 1];
	int ret = 0;

	while (start <= end) {
		// �õ��غ� �Ÿ�
		int mid = (start + end) / 2;
		if (isPossible(mid)) {
			ret = max(ret, mid);
			start = mid + 1;
		}
		else {
			end = mid - 1;
		}
	}

	return ret;
}

int main()
{
	cin >> n >> c;

	for (int i = 0; i < n; i++) {
		int temp; cin >> temp;
		homes.push_back(temp);
	}
	
	sort(homes.begin(), homes.end());

	cout << binarySearch();

	return 0;
}