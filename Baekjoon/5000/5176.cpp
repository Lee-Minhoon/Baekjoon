#include <iostream>
#include <cstring>

using namespace std;

const int MAX = 501;

bool arr[MAX];

int main(void)
{
    int K; cin >> K;

    while (K--) {
        int ans = 0;
        memset(arr, false, sizeof(arr));
        int P, M; cin >> P >> M;
        while (P--) {
            int temp; cin >> temp;
            if (arr[temp]) {
                ans++;
            }
            else {
                arr[temp] = true;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}