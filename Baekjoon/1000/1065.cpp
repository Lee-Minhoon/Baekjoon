#include<iostream>
#include<vector>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    std::vector<int> selfnum(10000);
    int num;
    int value = 0;
    
    std::cin >> num;

    for (int i = 1; i <= num; i++)
    {
        int std = i % 10 - i / 10 % 10;
        int temp = i / 10;
        while (true)
        {
            if (temp / 10 != 0)
            {
                if (std == temp % 10 - temp / 10 % 10)
                {
                    temp /= 10;
                }
                else
                {
                    break;
                }
            }
            else
            {
                value++;
                break;
            }
        }
    }
    std::cout << value;

    return 0;
}