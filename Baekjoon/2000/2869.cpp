#include<iostream>
#include<math.h>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    double a, b, v;

    std::cin >> a >> b >> v;
    std::cout << int(ceil((v - b) / (a - b)));

    return 0;
}