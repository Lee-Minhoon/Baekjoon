#include<iostream>

int main(void)
{
    int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    std::string day[7] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };
    int a, b;
    int temp = 0;
    std::cin >> a >> b;
    for (int i = 0; i < a - 1; i++) {
        temp += days[i];
    }
    temp += b;
    std::cout << day[(temp - 1) % 7];

    return 0;
}