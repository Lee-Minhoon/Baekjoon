#include <iostream>

using namespace std;

int main(void)
{
    int sum = 0, ans = 0;

    for (int i = 0; i < 10; i++) {
        int out, in; cin >> out >> in;
        sum += (in - out);
        ans = max(ans, sum);
    }

    cout << ans;

    return 0;
}