#include<iostream>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    int temp[9];
    int n = 0, max = 0;

    for (int i = 0; i < 9; i++)
    {
        std::cin >> temp[i];
        if (temp[i] > max)
        {
            max = temp[i];
            n = i + 1;
        }
    }

    std::cout << max << "\n" << n;

    return 0;
}