#include<iostream>

using namespace std;

int main(void)
{
    int a[3] = { 4,3,3 };
    int b[3] = { 0,4,2 };

    int x1 = 0;
    for (int i = 0; i < 3; i++) {
        cout << a[i] * b[i] << "\n";
        x1 += a[i] * b[i];
    }
    x1 *= 3;

    int x2 = 1;
    for (int i = 0; i < 2; i++) {
        int sum = 0;
        for (int j = 0; j < 3; j++) {
            if (i == 0) {
                sum += a[j];
            }
            else {
                sum += b[j];
            }
        }
        cout << sum << "\n";
        x2 *= sum;
    }

    int x3 = x1 - x2;

    cout << "분자 : " << x3 << "\n";
    

    cout << "=========================\n";

    int x4 = 0;
    for (int i = 0; i < 3; i++) {
        cout << a[i] * a[i] << "\n";
        x4 += a[i] * a[i];
    }
    x4 *= 3;

    int x5 = pow(a[0] + a[1] + a[2], 2);
    cout << x5 << "\n";
    int x6 = x4 - x5;

    int x7 = 0;
    for (int i = 0; i < 3; i++) {
        cout << b[i] * b[i] << "\n";
        x7 += b[i] * b[i];
    }
    x7 *= 3;

    int x8 = pow(b[0] + b[1] + b[2], 2);
    cout << x8 << "\n";
    int x9 = x7 - x8;

    double x10 = x6 * x9;
    x10 = sqrt(x10);

    cout << "분모 : " << x10 << "\n";
    double r = x3 / x10;
    

    cout << r;

    return 0;
}