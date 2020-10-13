#include <iostream>
#include <vector>

int main(void)
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::string a, b;
	std::vector<int> vec;

	std::cin >> a >> b;

	int strlen_a = a.length() - 1;
	int strlen_b = b.length() - 1;
	int strlen = a.length() >= b.length() ? a.length() : b.length();

	int temp_a;
	int temp_b;

	int plus;
	int next = 0;

	for (int i = 0; i < strlen; i++)
	{
		temp_a = i > strlen_a ? 0 : a[strlen_a - i] - '0';
		temp_b = i > strlen_b ? 0 : b[strlen_b - i] - '0';

		plus = (temp_a + temp_b + next) % 10;
		next = (temp_a + temp_b + next) / 10;

		vec.push_back(plus);
		if (i == strlen - 1 && next != 0) vec.push_back(next);
	}

	int vecsize = vec.size() - 1;

	for (int i = vecsize; i >= 0; i--)
	{
		std::cout << vec[i];
	}

	return 0;
}