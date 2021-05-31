#include <iostream>
#include <vector>

using namespace std;

int n, k;

int check(int number)
{
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += min(number / i, n);
	}
	return sum;
}

int binarySearch()
{
	int start = 1;
	int end = k;
	int result;

	while (end >= start) {
		int mid = (start + end) / 2;
		int cnt = check(mid);
		if (cnt < k) {
			start = mid + 1;
		}
		else {
			result = mid;
			end = mid - 1;
		}
	}

	return result;
}

int main()
{
	cin >> n >> k;

	cout << binarySearch();

	return 0;
}