#include<iostream>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    int num;

    std::cin >> num;

    int total = 0;
    int plus = 0;
    while (true)
    {
        if (num > total)
        {
            plus++;
            total += plus;
        }
        else
        {
            int left, right;
            if (plus % 2 == 0)
            {
                right = 1 + (total - num);
                left = (1 + plus) - right;
            }
            else
            {
                left = 1 + (total - num);
                right = (1 + plus) - left;
            }
            std::cout << left << "/" << right;
            break;
        }
    }

    return 0;
}