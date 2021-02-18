#include<iostream>
#include<vector>

using namespace std;

int main(void)
{
    int n; cin >> n;
    vector<int> dis(n - 1);
    vector<int> prices(n);

    for (int i = 0; i < n - 1; i++) {
        cin >> dis[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    int price = 1000000000;
    long long res = 0;
    for (int i = 0; i < n - 1; i++) {
        if (prices[i] < price) {
            price = prices[i];
        }
        res += 1LL * price * dis[i];
    }

    cout << res;

    return 0;
}