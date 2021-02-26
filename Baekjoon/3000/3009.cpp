#include<iostream>
#define MAX 4

using namespace std;

int point(int pArray[])
{
    bool dup;

    for (int i = 0; i < MAX - 1; i++) {
        dup = false;
        for (int j = 0; j < MAX - 1; j++) {
            if (i == j) {
                continue;
            }
            if (pArray[i] == pArray[j]) {
                dup = true;
            }
        }
        if (!dup) {
            return pArray[i];
        }
    }

    return 0;
}

int main(void)
{
    int x[MAX] = { 0, };
    int y[MAX] = { 0, };

    cin >> x[0] >> y[0];
    cin >> x[1] >> y[1];
    cin >> x[2] >> y[2];

    cout << point(x) << " " << point(y);
    
    return 0;
}