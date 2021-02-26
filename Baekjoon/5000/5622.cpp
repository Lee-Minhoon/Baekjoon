#include<iostream>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    int dial[8] = { 3, 6, 9, 12, 15, 19, 22, 26 };
    std::string str;
    int time = 0;

    std::cin >> str;
    int strlen = str.length();

    for (int i = 0; i < strlen; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (str[i] - 65 < dial[j])
            {
                time += j + 3;
                break;
            }
        }
    }
    
    std::cout << time;

    return 0;
}