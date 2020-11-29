#include<iostream>

using namespace std;

int main(void)
{
    int testCase; cin >> testCase;
    int a, b, c;

    for (int i = 0; i < testCase; i++) {
        cin >> a >> b;
        c = b * 2 - a;
        cout << c << " " << b - c << endl;
    }
    return 0;
}