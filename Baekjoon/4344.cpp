#include<iostream>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        int temp, sum = 0;
        std::cin >> temp;
        int* score = new int[temp];
        for (int j = 0; j < temp; j++)
        {
            std::cin >> score[j];
            sum += score[j];
        }
        double avg = double(sum) / temp;
        int value = 0;
        for (int j = 0; j < temp; j++)
        {
            if (score[j] > avg)
            {
                value++;
            }
        }
        double per = double(value) / temp * 100;
        std::cout.precision(3);
        std::cout << std::fixed << per << "%\n";
        delete[] score;
    }

    return 0;
}