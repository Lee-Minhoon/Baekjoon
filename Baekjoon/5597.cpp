#include<iostream>

using namespace std;

int main(void)
{
    int student[31] = { 0, };
    int temp;

    for (int i = 0; i < 28; i++) {
        cin >> temp;
        student[temp] = 1;
    }

    for (int i = 1; i < 31; i++) {
        if (student[i] == 0) {
            cout << i << endl;
        }
    }

    return 0;
}