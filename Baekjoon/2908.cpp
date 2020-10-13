#include<iostream>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    std::string a;
    std::string b;

    std::cin >> a >> b;

    char temp;
    temp = a[0];
    a[0] = a[2];
    a[2] = temp;
    temp = b[0];
    b[0] = b[2];
    b[2] = temp;

    if (a > b)
    {
        std::cout << a;
    }
    else
    {
        std::cout << b;
    }

    return 0;
}