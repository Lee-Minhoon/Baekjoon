#include<iostream>
#include<vector>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    std::string str;
    int vecsize = 26;
    std::vector<int> vec(vecsize, -1);

    std::cin >> str;
    int strlen = str.length();

    for (int i = 0; i < strlen; i++)
    {
        int loc = str[i] - 97;
        if (vec[loc] == -1)
        {
            vec[loc] = i;
        }
    }

    for (int i = 0; i < vecsize; i++)
    {
        std::cout << vec[i] << "\n";
    }

    return 0;
}