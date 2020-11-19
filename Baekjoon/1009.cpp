#include<iostream>
#define NUM 10

using namespace std;

int main(void)
{
    int testCase, a, b, res;
    int repeat[NUM][4] = {
        { 10, 10, 10, 10 },
        { 1, 1, 1, 1 },
        { 2, 4, 8, 6 },
        { 3, 9, 7, 1 },
        { 4, 6, 4, 6 },
        { 5, 5, 5, 5 },
        { 6, 6, 6, 6 },
        { 7, 9, 3, 1 },
        { 8, 4, 2, 6 },
        { 9, 1, 9, 1 }
    };

    cin >> testCase;

    for (int i = 0; i < testCase; i++) {
        cin >> a;
        cin >> b;

        res = repeat[a % 10][(b - 1) % 4];
        cout << res << endl;
    }

    return 0;
}