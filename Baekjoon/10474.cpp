#include <iostream>

using namespace std;

int main(void)
{
    int a, b; cin >> a >> b;

    while (a != 0 && b != 0) {
        printf("%d %d / %d\n", a / b, a % b, b);
        cin >> a >> b;
    }

    return 0;
}