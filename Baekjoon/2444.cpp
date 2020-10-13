#include <iostream>

int main(void)
{
	int n;
	std::cin >> n;

	int i = 0;
	bool check = true;
	while (true)
	{
		if (i == -1) break;
		for (int j = 0; j < n - 1 - i; j++)
		{
			std::cout << " ";
		}
		for (int j = 0; j < i * 2 + 1; j++)
		{
			std::cout << "*";
		}
		std::cout << "\n";
		if (i < n - 1 && check) i++;
		else
		{
			check = false;
			i--;
		}
	}

	return 0;
}