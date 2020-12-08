#include<iostream>
#include<string>

using namespace std;

int main(void)
{
    int k[3];
    int min = 0;
    string university[3] = { "Soongsil", "Korea", "Hanyang" };

    for (int i = 0; i < 3; i++) {
        cin >> k[i];
    }

    if (k[0] + k[1] + k[2] >= 100) {
        cout << "OK";
    }
    else {
        for (int i = 0; i < 3; i++) {
            if (k[i] <= k[min]) {
                min = i;
            }
        }
        cout << university[min];
    }

    return 0;
}