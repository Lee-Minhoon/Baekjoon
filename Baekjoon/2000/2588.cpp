#include<iostream>

int main(void)
{
    int a, b, temp;
    std::cin >> a >> b;
    temp = b;
    while (1)
    {
        std::cout << a * (temp % 10) << std::endl;
        if (temp / 10 == 0)
        {
            break;
        }
        else
        {
            temp /= 10;
        }
    }
    std::cout << a * b;

    return 0;
}