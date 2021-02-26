#include<iostream>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    int n;
    int row = 0;
    int num = 1;

    std::cin >> n;
    while (true)
    {
        if (n <= num)
        {
            break;
        }
        else
        {
            row++;
            num += row * 6;
        }
    }

    std::cout << row + 1;

    return 0;
}