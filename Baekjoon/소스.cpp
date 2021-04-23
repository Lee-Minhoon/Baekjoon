#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



int main(void)
{
    printf("%-8.2f\n", 200.2);
    printf("%8.2f", 200.2);

    char input[50];
    scanf("%s", input);
    printf("%.5s\n", input);
    printf("%5.3s\n", input);
    return 0;
}
