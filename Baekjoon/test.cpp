#include<iostream>

using namespace std;

void b(void)
{
    cout << "that is true";
    return;
}

void a(void)
{
    return;
}

int main(void)
{
    1 ? b() : NULL;

    return 0;
}