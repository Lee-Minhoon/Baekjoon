#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, c;
vector<int> homes;

// 해당 거리만큼 띄우면서 와이파이 설치가 가능한지
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
	// 가장 가까운 거리
	int start = 1;
	// 가장 먼 거리
	int end = homes[n - 1];
	int ret = 0;

	while (start <= end) {
		// 시도해볼 거리
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