#include <iostream>

using namespace std;

int main(void)
{
    int t; cin >> t;

    while (t--) {
        int price; cin >> price;
        int n; cin >> n;
        while (n--) {
            int q, p; cin >> q >> p;
            price += (q * p);
        }
        cout << price << '\n';
    }

    return 0;
}