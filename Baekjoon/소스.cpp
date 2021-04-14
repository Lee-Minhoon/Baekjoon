#include<stdio.h>

using namespace std;

int sum(int i)
{
    if (i <= 1) return i;
    return sum(i - 1) + sum(i - 2);
}

int main(void)
{
    int a = 5;

    printf("%d", sum(a));

    return 0;
}