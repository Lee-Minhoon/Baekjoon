#include<iostream>

using namespace std;

#define MAX 10001

int DP[MAX];
int dis, value;

int main(void)
{
    int N; cin >> N;

    for (int i = 1; i <= N; i++) {
        int temp; cin >> temp;
        if (i == 1) {
            DP[i] = 1;
            dis = 1;
            value = temp;
        }
        else {
            if (temp > value) {
                DP[i] = dis++;
                value = temp;
            }
            else {
                DP[i] = 1;
            }
        }
    }

    cout << dis;

    return 0;
}