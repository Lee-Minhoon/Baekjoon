#include <iostream>

int main(void)
{
	int n;
	std::cin >> n;

	int a = 0;
	int b = n * 2;
	for (int i = 1; i <= n * 2 - 1; i++)
	{
		if (i <= n)
		{
			a++;
			b--;
		}
		else
		{
			a--;
			b++;
		}
		for (int j = 1; j <= n * 2; j++)
		{
			if (j <= a || j > b) std::cout << "*";
			else std::cout << " ";
		}
		std::cout << "\n";
	}

	return 0;
}