#include <iostream>

int main(void)
{
	int n;
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int temp_i = i;
			int temp_j = j;
			bool check = false;
			while (true)
			{
				if (temp_i % 3 == 1 && temp_j % 3 == 1)
				{
					check = true;
					break;
				}
				else
				{
					temp_i /= 3;
					temp_j /= 3;
					if (temp_i == 0 && temp_j == 0) break;
				}
			}
			check ? std::cout << " " : std::cout << "*";
		}
		std::cout << "\n";
	}

	return 0;
}