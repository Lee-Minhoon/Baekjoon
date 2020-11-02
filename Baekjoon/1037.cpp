#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(void)
{
	int cnt;
	vector<int> divisor;
	int number;

	cin >> cnt;

	for (int i = 0; i < cnt; i++)
	{
		cin >> number;
		divisor.push_back(number);
	}

	sort(divisor.begin(), divisor.end());
	int vecsize = divisor.size();

	cout << divisor.front() * divisor.back();

	return 0;
}