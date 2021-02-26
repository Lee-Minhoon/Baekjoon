#include<iostream>

using namespace std;

int fact(int num)
{
    if (num > 1 && num != 0) {
        return num * fact(num - 1);
    }
    else {
        return 1;
    }
}

int main(void)
{
    int num;

    cin >> num;
    cout << fact(num);

    return 0;
}