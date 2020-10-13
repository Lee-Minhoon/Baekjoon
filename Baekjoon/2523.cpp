#include<iostream>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    int n;
    std::cin >> n;
    int value = 0;

    for (int i = 0; i < n * 2 - 1; i++)
    {
        for (int j = 0; j < value + 1; j++)
        {
            std::cout << "*";
        }
        if (i < n - 1)
        {
            value++;
        }
        else
        {
            value--;
        }
        std::cout << "\n";
    }

    return 0;
}