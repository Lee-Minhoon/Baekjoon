#include <iostream>

using namespace std;
using LL = long long;

const int MAX = 1000001;
int tree[MAX];
int n, m;

// ��� �� �� �ִ� ������ ���ϴ� �Լ�
LL cut(LL height)
{
	LL ret = 0;
	for (int i = 0; i < n; i++) {
		if (tree[i] > height) {
			ret += (tree[i] - height);
		}
	}
	return ret;
}

int binarySearch(int longest)
{
	LL start = 0;
	LL end = longest;
	// ���ܱ� ���� mid
	LL mid = (start + end) / 2;
	
	while (end - start >= 0) {
		LL result = cut(mid);
		// ��� �� �� �ִ� ������ �ʿ��� �ͺ��� ������
		if (result > m) {
			start = mid + 1;
		}
		// ������
		else if (result < m) {
			end = mid - 1;
		}
		// ������
		else {
			break;
		}
		mid = (start + end) / 2;
	}

	return mid;
}

int main()
{
	// ���� ������ �ʿ��� ������ �Է¹޴´�.
	cin >> n >> m;

	int longest = 0;
	for (int i = 0; i < n; i++) {
		cin >> tree[i];
		// ���� ū ���� ���̸� �����Ѵ�.
		longest = max(longest, tree[i]);
	}

	cout << binarySearch(longest);

	return 0;
}