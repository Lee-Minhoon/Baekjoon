#include<iostream>
#define MAX 26

using namespace std;

int main(void)
{
    short alpha[MAX] = { 0, };
    string s; cin >> s;
    string::iterator iter;
    for (iter = s.begin(); iter < s.end(); iter++) {
        alpha[int(*iter) - 97]++;
    }

    for (int i = 0; i < MAX; i++) {
        cout << alpha[i] << " ";
    }

    return 0;
}