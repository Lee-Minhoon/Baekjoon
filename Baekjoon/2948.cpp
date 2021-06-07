#include <iostream>

using namespace std;

string Weeks[7] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };

int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 };

int main(void)
{
    int D, M; cin >> D >> M;
    int cnt = 0;

    for (int i = 0; i < M; i++) {
        cnt += days[i];
    }
    cnt += D;

    cout << Weeks[(cnt + 2) % 7];

    return 0;
}