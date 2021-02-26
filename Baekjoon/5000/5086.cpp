#include<iostream>

using namespace std;

void judge(int a, int b)
{
    if (b % a == 0) cout << "factor\n";
    else if (a % b == 0) cout << "multiple\n";
    else cout << "neither\n";
}

int main(void)
{
    int a, b; cin >> a >> b;

    while (a != 0 && b != 0) {
        judge(a, b);
        cin >> a >> b;
    }

    return 0;
}