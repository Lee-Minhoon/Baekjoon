#include <iostream>

using namespace std;

int main(void)
{
    int T; cin >> T;

    while (T--) {
        int V, E; cin >> V >> E;
        cout << abs(V - E - 2) << '\n';
    }

    return 0;
}