#include <iostream>

using namespace std;

const int MAX = 100;

int N, M;
int memory[MAX + 1];
int cost[MAX + 1];
int total;
int cache[MAX * MAX + 1];

int main(void)
{
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        cin >> memory[i];
    }

    for (int i = 0; i < N; i++) {
        cin >> cost[i];
        total += cost[i];
    }

    for (int i = 0; i < N; i++) {
        for (int j = total; j >= cost[i]; j--) {
            cache[j] = max(cache[j], cache[j - cost[i]] + memory[i]);
        }
    }

    for (int i = 0; i <= total; i++) {
        if (cache[i] >= M) {
            cout << i;
            return 0;
        }
    }

    return 0;
}