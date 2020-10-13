#include<iostream>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    int n, num = 1;
    int number[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

    for (int i = 0; i < 3; i++)
    {
        std::cin >> n;
        num *= n;
    }

    while (num != 0)
    {
        number[num % 10]++;
        num /= 10;
    }

    for (int i = 0; i < 10; i++)
    {
        std::cout << number[i] << "\n";
    }

    return 0;
}