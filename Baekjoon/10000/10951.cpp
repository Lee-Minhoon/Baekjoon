#include<iostream>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    int a = 0, b = 0;

    while (std::cin >> a >> b)
    {
        std::cout << a + b << "\n";
    }

    return 0;
}