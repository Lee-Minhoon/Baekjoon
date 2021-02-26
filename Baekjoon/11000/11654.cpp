#include<iostream>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    char ascii;

    std::cin >> ascii;

    std::cout << +ascii;

    return 0;
}