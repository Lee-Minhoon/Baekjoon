#include<iostream>

using namespace std;

#define MAX 1000001

int DP[MAX];
int dis;

int binarySearch(int target)
{
    int start = 0;
    int end = dis;
    
    while (end >= start) {
        int mid = (start + end) / 2;
        if (target > DP[mid]) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    return start;
}

int main(void)
{
    int N; cin >> N;

    for (int i = 1; i <= N; i++) {
        int temp; cin >> temp;
        if (temp > DP[dis]) {
            DP[++dis] = temp;
        }
        else {
            DP[binarySearch(temp)] = temp;
        }
    }

    cout << dis;

    return 0;
}