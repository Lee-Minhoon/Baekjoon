#include<iostream>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    std::cout.precision(6);
    std::cout << std::fixed;
    int n, max = 0;
    double newscore = 0;
    double* score;
    
    std::cin >> n;
    score = new double[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> score[i];
        if (score[i] > max)
        {
            max = score[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        newscore += score[i] / max * 100;
    }

    newscore /= n;
    std::cout << newscore;

    return 0;
}