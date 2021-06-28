#include <iostream>

using namespace std;

const int MAX_CNT = 30;
const int MAX_WEIGHT = 500;

int N, M;
int W[MAX_CNT];
bool cache[MAX_CNT + 1][MAX_CNT * MAX_WEIGHT + 1];

void func(int cnt, int weight)
{
    if (cnt > N || cache[cnt][weight]) {
        return;
    }

    cache[cnt][weight] = true;

    func(cnt + 1, weight + W[cnt]);
    func(cnt + 1, weight);
    func(cnt + 1, abs(weight - W[cnt]));
}

int main(void)
{
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> W[i];
    }

    func(0, 0);

    cin >> M;

    for (int i = 0; i < M; i++) {
        int T; cin >> T;
        if (T > MAX_CNT * MAX_WEIGHT) {
            cout << "N ";
            continue;
        }
        cache[N][T] ? cout << "Y " : cout << "N ";
    }

    return 0;
}