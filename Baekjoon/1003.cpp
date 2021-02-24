#include<iostream>

using namespace std;

#define MAX 41

pair<int, int> memory[MAX];

pair<int, int> plusPair(pair<int, int> a, pair<int, int> b)
{
    return pair(a.first + b.first, a.second + b.second);
}

pair<int, int> fibonacci(int n)
{
    if (n == 0) return pair(1, 0);
    if (n == 1) return pair(0, 1);
    else {
        if (memory[n].first != 0 && memory[n].second != 0) return memory[n];
        else {
            memory[n] = plusPair(fibonacci(n - 1), fibonacci(n - 2));
            return memory[n];
        }
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T; cin >> T;

    for (int i = 0; i < T; i++) {
        int temp; cin >> temp;
        pair<int, int> tempPair = fibonacci(temp);
        cout << tempPair.first << " " << tempPair.second << "\n";
    }

    return 0;
}