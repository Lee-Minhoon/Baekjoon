#include<iostream>

int main(void)
{
    int score;
    std::cin >> score;

    if (score >= 0 && score <= 100)
    {
        if (score <= 100 && score >= 90)
        {
            std::cout << "A";
        }
        else if (score <= 89 && score >= 80)
        {
            std::cout << "B";
        }
        else if (score <= 79 && score >= 70)
        {
            std::cout << "C";
        }
        else if (score <= 69 && score >= 60)
        {
            std::cout << "D";
        }
        else
        {
            std::cout << "F";
        }
    }

    return 0;
}