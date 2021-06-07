#include <iostream>

using namespace std;

int main(void)
{
    int t; cin >> t;

    while (t--) {
        int c, v; cin >> c >> v;
        printf("You get %d piece(s) and your dad gets %d piece(s).\n", c / v, c % v);
    }

    return 0;
}