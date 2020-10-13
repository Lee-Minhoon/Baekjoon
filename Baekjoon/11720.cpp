#include<iostream>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    int num;
    char* nums;
    int sum = 0;

    std::cin >> num;
    nums = new char[num];

    for (int i = 0; i < num; i++)
    {
        std::cin >> nums[i];
        sum += nums[i] - '0';
    }

    std::cout << sum;

    return 0;
}