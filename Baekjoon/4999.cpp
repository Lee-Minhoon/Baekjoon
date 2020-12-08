#include<iostream>

using namespace std;

int main(void)
{
    string i, j; cin >> i >> j;
    int ilen = i.length();
    int jlen = j.length();

    if (ilen >= jlen) {
        cout << "go";
    }
    else {
        cout << "no";
    }

    return 0;
}