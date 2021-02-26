#include<iostream>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    int n, x;
    std::cin >> n >> x;

    for (int i = 1; i <= n; i++)
    {
        int temp;
        std::cin >> temp;
        if (temp < x)
        {
            std::cout << temp << " ";
        }
    }

    return 0;
}