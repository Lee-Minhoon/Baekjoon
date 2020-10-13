#include <iostream>

int main(void)
{
	int n;
	std::cin >> n;

	for (int i = n - 1; i >= 0; i--)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			std::cout << " ";
		}
		for (int j = 0; j < i * 2 + 1; j++)
		{
			std::cout << "*";
		}
		std::cout << "\n";
	}

	return 0;
}