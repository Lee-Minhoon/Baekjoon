#include<iostream>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    std::string str;
    int word = 0;
    std::cin >> str;
    int strlen = str.length();
    
    for (int i = 0; i < strlen; i++)
    {
        word++;
        if (str[i] == '=' || str[i] == '-')
        {
            word--;
            if (i > 1)
            {
                if (str[i - 2] == 'd' && str[i - 1] == 'z')
                {
                    word--;
                }
            }
        }
        else if (str[i] == 'j')
        {
            if (str[i - 1] == 'l' || str[i - 1] == 'n')
            {
                word--;
            }
        }
    }

    std::cout << word;

    return 0;
}