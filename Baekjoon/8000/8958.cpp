#include<iostream>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    int n;
    std::string ox;

    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> ox;
        int sum = 0;
        for (int j = 0; j < ox.length(); j++)
        {
            int score = 0;
            if (ox[j] == 'O')
            {
                score++;
                if (j != 0)
                {
                    for (int k = j - 1; k >= 0; k--)
                    {
                        if (ox[k] == 'O')
                        {
                            score++;
                        }
                        else
                        {
                            break;
                        }
                    }
                }
            }
            sum += score;
        }
        std::cout << sum << "\n";
    }

    return 0;
}