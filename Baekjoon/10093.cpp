#include<iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long a, b; cin >> a >> b;

    if (a == b) {
        cout << 0;
    }
    else {
        cout << abs(a - b) - 1 << "\n";
        if (a > b) {
            for (long long i = b + 1; i < a; i++) {
                cout << i;
                if (i != a - 1) {
                    cout << " ";
                }
            }
        }
        else {
            for (long long i = a + 1; i < b; i++) {
                cout << i;
                if (i != b - 1) {
                    cout << " ";
                }
            }
        }
    }

    return 0;
}