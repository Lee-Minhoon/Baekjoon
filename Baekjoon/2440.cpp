#include <iostream>

int main(void)
{
	int n;
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			std::cout << "*";
		}
		std::cout << "\n";
	}

	return 0;
}