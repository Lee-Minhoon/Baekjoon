#include<iostream>
#include<vector>

using namespace std;

int main(void)
{
    vector<int> binary;
    vector<int>::reverse_iterator iter;
    int o = 0, d = 0;
    int factor = 1;
    int digit = 1;
    
    cin >> o;

    while (o >= factor) {
        d += (o / factor % 10 * digit);
        factor *= 10;
        digit *= 8;
    }

    cout << d << endl;

    factor = 1;
    digit = 0;
    while (d >= factor) {
        cout << factor << " : " << ((d >> digit) & 1) << endl;
        binary.push_back((d >> digit) & 1);
        factor *= 2;
        digit++;
    }

    for (iter = binary.rbegin(); iter != binary.rend(); iter++) {
        cout << *iter;
    }

    return 0;
}