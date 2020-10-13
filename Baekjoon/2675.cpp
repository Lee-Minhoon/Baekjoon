#include<iostream>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    int n;
    int temp;
    std::string str;
    int strlen;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> temp;
        std::cin >> str;
        strlen = str.length();
        for (int j = 0; j < strlen; j++)
        {
            for (int k = 0; k < temp; k++)
            {
                std::cout << str[j];
            }
        }
        std::cout << "\n";
    }

    return 0;
}