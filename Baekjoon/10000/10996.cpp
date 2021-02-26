#include<iostream>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    int n;
    std::cin >> n;

    for (int i = 0; i < n * 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((j + i) % 2 == 0)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }

    return 0;
}