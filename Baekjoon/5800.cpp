#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int K; cin >> K;

    for (int i = 1; i <= K; i++) {
        int N; cin >> N;
        vector<int> scores(N);
        for (int j = 0; j < N; j++) {
            cin >> scores[j];
        }
        sort(scores.begin(), scores.end());
        int value = 0;
        for (int i = 0; i < N - 1; i++) {
            value = max(value, scores[i + 1] - scores[i]);
        }
        printf("Class %d\n", i);
        printf("Max %d, Min %d, Largest gap %d\n", scores[N - 1], scores[0], value);
    }

    return 0;
}