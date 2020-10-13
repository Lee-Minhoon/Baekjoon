#include<iostream>
#include<string>

int main(void)
{
    std::string temp;

    for (int i = 0; i < 100; i++) {
        std::getline(std::cin, temp);
        std::cout << temp << std::endl;
    }

    return 0;
}