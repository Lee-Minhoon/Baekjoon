#include<iostream>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    int n;
    int* numarray;
    int min = 1000000, max = -1000000;
    
    std::cin >> n;
    numarray = new int[n];


    for (int i = 0; i < n; i++)
    {
        std::cin >> numarray[i];
        if (numarray[i] < min)
        {
            min = numarray[i];
        }
        if (numarray[i] > max)
        {
            max = numarray[i];
        }
    }

    std::cout << min << " " << max;
    delete[] numarray;

    return 0;
}