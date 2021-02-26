#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

#define MAX 101

pair<int, int> input[MAX];
int DP[MAX];

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.first < b.first;
}

int main(void)
{
    int N; cin >> N;
    
    for (int i = 1; i <= N; i++) {
        cin >> input[i].first >> input[i].second;
    }
    
    sort(input + 1, input + 1 + N, cmp);

    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < i; j++) {
            if (input[i].second > input[j].second) {
                DP[i] = max(DP[i], DP[j] + 1);
            }
        }
    }

    int res = 0;
    for (int i = 1; i <= N; i++) {
        if (DP[i] > res) {
            res = DP[i];
        }
    }

    cout << N - res;

    return 0;
}