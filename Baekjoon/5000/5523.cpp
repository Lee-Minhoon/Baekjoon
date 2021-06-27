#include <iostream>

using namespace std;

int main(void)
{
    int A = 0, B = 0;
    int N; cin >> N;

    while (N--) {
        int Ai, Bi; cin >> Ai >> Bi;
        if (Ai > Bi) {
            A++;
        }
        else if (Bi > Ai) {
            B++;
        }
    }

    cout << A << ' ' << B;

    return 0;
}