#include<iostream>

using namespace std;

int main(void)
{
    int ans, temp; cin >> ans;
    int res = 0;

    for (int i = 0; i < 5; i++) {
        cin >> temp;
        if (temp == ans) {
            res++;
        }
    }

    cout << res;

    return 0;
}