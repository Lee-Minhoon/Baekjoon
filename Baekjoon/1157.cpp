#include<iostream>
#include<vector>
#include<string>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    std::string str;
    int vecsize = 26;
    std::vector<int> vec(vecsize, 0);
    int max = 0;

    std::cin >> str;
    int strlen = str.length();

    for (int i = 0; i < strlen; i++)
    {
        int loc = std::toupper(str[i]) - 65;
        vec[loc]++;
    }

    char loc;
    for (int i = 0; i < vecsize; i++)
    {
        if (max != 0 && vec[i] == max)
        {
            loc = '?';
        }
        if (vec[i] > max)
        {
            max = vec[i];
            loc = i + 65;
        }
    }
    std::cout << loc;

    return 0;
}