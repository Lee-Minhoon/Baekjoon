#include<iostream>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    int sum = 0, value = 0;

    for (int i = 0; i < 5; i++)
    {
        int score;
        std::cin >> score;
        if (score >= 0 && score <= 100 && score % 5 == 0)
        {
            if (score < 40)
            {
                score = 40;
            }
            sum += score;
            value++;
        }
    }
    std::cout << sum / value;

    return 0;
}