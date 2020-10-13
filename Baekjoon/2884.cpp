#include<iostream>

int main(void)
{
    int h, m;
    std::cin >> h >> m;

    if (m >= 45)
    {
        m -= 45;
    }
    else
    {
        m = (60 + m) - 45;
        if (h == 0)
        {
            h = 23;
        }
        else
        {
            h -= 1;
        }
    }
    std::cout << h << " " << m;

    return 0;
}