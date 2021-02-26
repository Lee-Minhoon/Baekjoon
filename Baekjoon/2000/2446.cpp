#include<iostream>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    int n;
    std::cin >> n;
    int value = 0, value2 = n * 2 - 1;

    for (int i = 0; i < n * 2 - 1; i++)
    {
        for (int j = 0; j < n * 2 - 1; j++)
        {
            if (j < value)
            {
                std::cout << " ";
            }
            else if(j < value2)
            {
                std::cout << "*";
            }
        }
        std::cout << "\n";
        if (i < n - 1)
        {
            value++;
            value2--;
        }
        else
        {
            value--;
            value2++;
        }
    }

    return 0;
}