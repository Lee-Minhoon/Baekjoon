#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int A, B; cin >> A >> B;
    vector<int> v;

    while (A > 0 || B > 0) {
        v.push_back(A % 10 + B % 10);
        A /= 10;
        B /= 10;
    }

    vector<int>::reverse_iterator i;
    for (i = v.rbegin(); i < v.rend(); i++) {
        cout << *i;
    }

    return 0;
}