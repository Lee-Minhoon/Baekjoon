#include<iostream>
#include<vector>
#include<string>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    int n;
    int numarray[15][14];

    for (int i = 0; i < 14; i++)
    {
        numarray[0][i] = i + 1;
    }

    for (int i = 1; i < 15; i++)
    {
        for (int j = 0; j < 14; j++)
        {
            if (j == 0) numarray[i][j] = 1;
            else numarray[i][j] = numarray[i - 1][j] + numarray[i][j - 1];
        }
    }

    std::cin >> n;
    int a, b;
    for (int i = 0; i < n; i++)
    {
        std::cin >> a;
        std::cin >> b;
        std::cout << numarray[a][b - 1] << "\n";
    }

    return 0;
}