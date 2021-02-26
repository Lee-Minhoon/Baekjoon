#include<iostream>
#include<string>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    std::string str;
    int word = 1;

    std::getline(std::cin, str);
    int strlen = str.length();

    if (strlen == 1 && str[0] == ' ')
    {
        word = 0;
    }
    else
    {
        for (int i = 0; i < strlen; i++)
        {
            if (i != 0 && i != strlen - 1 && str[i] == ' ')
            {
                word++;
            }
        }
    }

    std::cout << word;

    return 0;
}