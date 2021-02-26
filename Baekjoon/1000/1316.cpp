#include<iostream>
#include<vector>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    std::string str;
    
    int n;
    std::cin >> n;
    int word = n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> str;
        int strlen = str.length();
        int loc;
        std::vector<bool> vec(26, false);

        for (int j = 0; j < strlen; j++)
        {
            loc = str[j] - 97;
            if (vec[loc])
            {
                if (str[j - 1] == str[j])
                {
                    continue;
                }
                else
                {
                    word--;
                    break;
                }
            }
            else
            {
                vec[loc] = true;
            }
        }
    }

    std::cout << word;

    return 0;
}