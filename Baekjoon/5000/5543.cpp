#include<iostream>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    int menu[5];
    int min = 4000;

    for (int i = 0; i < 5; i++)
    {
        std::cin >> menu[i];
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 3; j < 5; j++)
        {
            if (menu[i] + menu[j] - 50 < min)
            {
                min = menu[i] + menu[j] - 50;
            }
        }
    }
    std::cout << min;

    return 0;
}