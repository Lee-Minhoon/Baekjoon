#include<iostream>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    int n, value = 1;
    std::cin >> n;

    if (0 <= n && n <= 99)
    {
        int temp = n;
        while (true)
        {
            int n1 = temp % 10;
            int n2 = temp / 10 % 10;
            int sum = (n1 + n2) % 10;

            if (n1 * 10 + sum == n)
            {
                break;
            }
            else
            {
                value++;
                temp = n1 * 10 + sum;
            }
        }
        std::cout << value;
    }

    return 0;
}