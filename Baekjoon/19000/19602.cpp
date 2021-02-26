#include<iostream>

using namespace std;

int main(void)
{
    int s, m, l; cin >> s >> m >> l;

    if (s + m * 2 + l * 3 >= 10) {
        cout << "happy";
    }
    else {
        cout << "sad";
    }

    return 0;
}