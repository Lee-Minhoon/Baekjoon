#include <iostream>

int main(void)
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	int n, a, b;
	char c;

	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> a >> c >> b;
		std::cout << a + b << "\n";
	}

	return 0;
}