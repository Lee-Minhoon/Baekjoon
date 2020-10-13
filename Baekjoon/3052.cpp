#include<iostream>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    int n;
    int temp[10];
    int value = 0;

    for (int i = 0; i < 10; i++)
    {
        std::cin >> n;
        temp[i] = n % 42;
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (temp[i] == temp[j])
            {
                temp[j] = -1;
            }
        }
        if (temp[i] != -1)
        {
            value++;
        }
    }
    std::cout << value;

    return 0;
}