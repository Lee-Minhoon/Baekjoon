#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<ctime>

using namespace std;

int main(void)
{
    struct tm ts;
    time_t now = time(nullptr);

    ts = *localtime(&now);

    cout << ts.tm_year + 1900 << endl;
    cout << ts.tm_mon + 1 << endl;
    cout << ts.tm_mday << endl;

    return 0;
}