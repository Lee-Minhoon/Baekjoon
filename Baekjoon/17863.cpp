#include<iostream>

using namespace std;

int main(void)
{
    int num; cin >> num;

    if (num >= 5550000 && num <= 5559999) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}