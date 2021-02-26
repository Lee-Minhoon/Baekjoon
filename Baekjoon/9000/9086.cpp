#include<iostream>

using namespace std;

int main(void)
{
    short testCase; cin >> testCase;
    
    for (short i = 0; i < testCase; i++) {
        string str; cin >> str;
        cout << str.front() << str.back() << endl;
    }
    return 0;
}