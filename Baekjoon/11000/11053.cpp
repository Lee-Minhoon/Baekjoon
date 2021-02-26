#include<iostream>

using namespace std;

#define MAX 1001

int DP[MAX];
int dis;

int main(void)
{
    int N; cin >> N;

    for (int i = 1; i <= N; i++) {
        int temp; cin >> temp;
        if (temp > DP[dis]) {
            DP[++dis] = temp;
        }
        else {
            for (int j = 1; j <= dis; j++) {
                if (temp < DP[j] && temp > DP[j - 1]) {
                    DP[j] = temp;
                }
            }
        }
    }

    cout << dis;

    return 0;
}