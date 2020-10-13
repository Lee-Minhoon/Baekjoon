#include<iostream>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    int n;
    int a, b;
    int dis;
    int temp;
    int minustemp;
    int value;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> a >> b;
        dis = b - a;

        temp = 0;
        minustemp = 0;
        value = 0;
        while (dis > 0)
        {
            if (dis >= temp + (minustemp + 1))
            {
                minustemp++;
                temp += minustemp;
                dis -= minustemp;
            }
            else if (dis >= temp)
            {
                dis -= minustemp;
            }
            else
            {
                temp -= minustemp;
                minustemp--;
                dis -= minustemp;
            }
            value++;
        }
        std::cout << value << "\n";
    }

    return 0;
}