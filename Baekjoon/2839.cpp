#include<iostream>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    int n;
    int min = - 1;

    std::cin >> n;
    int y = n / 3;

    while (y >= 0)
    {
        int x = (n - 3 * y) % 5;
        if (x == 0)
        {
            x = (n - 3 * y) / 5;
            min = x + y;
        }
        y--;
    }
    std::cout << min;

    return 0;
}