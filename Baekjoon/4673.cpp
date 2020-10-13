#include<iostream>
#include<vector>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    std::vector<int> selfnum(10000);
    int num = 1;
    int value = 0;

    for (int i = 0; i < 10000; i++)
    {
        int temp = num;
        int value = num;
        while (temp != 0)
        {
            value += temp % 10;
            temp /= 10;
        }
        if (value <= 10000)
        {
            selfnum[value - 1]++;
        }
        num++;
    }

    for (int i = 0; i < 10000; i++)
    {
        if (selfnum[i] == 0)
        {
            std::cout << i + 1 << "\n";
        }
    }

    return 0;
}