#include <iostream>

int main(void)
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	int a, b;

	std::cin >> a;
	std::cin >> b;

	std::cout << a + b;

	return 0;
}