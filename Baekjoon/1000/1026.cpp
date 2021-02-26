#include <iostream>
#include <vector>
#include <algorithm>

bool cmp(int a, int b)
{
	return a > b;
}

int main(void)
{
	int n, sum = 0;
	
	std::cin >> n;

	std::vector<std::vector<int>> vec;
	std::vector<int> vec1;
	std::vector<int> vec2;
	vec.push_back(vec1);
	vec.push_back(vec2);

	int temp;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cin >> temp;
			vec[i].push_back(temp);
		}
	}

	std::sort(vec[0].begin(), vec[0].end(), cmp);
	std::sort(vec[1].begin(), vec[1].end());

	for (int i = 0; i < n; i++)
	{
		sum += (vec[0][i] * vec[1][i]);
	}

	std::cout << sum;

	return 0;
}