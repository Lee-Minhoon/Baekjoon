#define _USE_MATH_DEFINES
#include<iostream>
#include<cmath>

using namespace std;

int main(void)
{
    int radius; cin >> radius;
    double pi = M_PI;
    
    cout << fixed;
    cout.precision(10);
    cout << radius * radius * pi << "\n";
    cout << radius * radius * 2;

    return 0;
}