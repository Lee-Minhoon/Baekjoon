#include<iostream>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    int a, b, c;

    std::cin >> a >> b >> c;

    if (b >= c)
    {
        std::cout << -1;
    }
    else
    {
        std::cout << a / (c - b) + 1;
    }
    

    return 0;
}