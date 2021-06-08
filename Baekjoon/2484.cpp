#include <iostream>

using namespace std;

pair<int, int> rewards[5] = { {2000, 500}, {0, 100}, {1000, 100}, {10000, 1000}, {50000, 5000} };

int main(void)
{
    int ans = 0;
    int N; cin >> N;

    while (N--) {
        int dice[7] = { 0, };
        int v = 0, point = 0;
        for (int i = 0; i < 4; i++) {
            int temp; cin >> temp;
            dice[temp]++;
            if (v < dice[temp]) {
                v = dice[temp];
                point = temp;
            }
            else if (v == dice[temp]) {
                if (v == 2) {
                    v = 0;
                    point += temp;
                }
                else {
                    if (point < temp) {
                        point = temp;
                    }
                }
            }
        }
        int reward = rewards[v].first + point * rewards[v].second;
        ans = max(ans, reward);
    }

    cout << ans;

    return 0;
}