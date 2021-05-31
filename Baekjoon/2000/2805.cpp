#include <iostream>

using namespace std;
using LL = long long;

const int MAX = 1000001;
int tree[MAX];
int n, m;

// 들고 갈 수 있는 나무를 구하는 함수
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
	// 절단기 높이 mid
	LL mid = (start + end) / 2;
	
	while (end - start >= 0) {
		LL result = cut(mid);
		// 들고 갈 수 있는 나무가 필요한 것보다 많으면
		if (result > m) {
			start = mid + 1;
		}
		// 작으면
		else if (result < m) {
			end = mid - 1;
		}
		// 같으면
		else {
			break;
		}
		mid = (start + end) / 2;
	}

	return mid;
}

int main()
{
	// 나무 개수와 필요한 나무를 입력받는다.
	cin >> n >> m;

	int longest = 0;
	for (int i = 0; i < n; i++) {
		cin >> tree[i];
		// 제일 큰 나무 길이를 갱신한다.
		longest = max(longest, tree[i]);
	}

	cout << binarySearch(longest);

	return 0;
}