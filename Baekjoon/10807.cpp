#include <iostream>

using namespace std;

int cnt[201];

int main(void)
{
    int N; cin >> N;

    while (N--) {
        int temp; cin >> temp;
        cnt[temp + 100]++;
    }

    int v; cin >> v;
    cout << cnt[v + 100];

    return 0;
}