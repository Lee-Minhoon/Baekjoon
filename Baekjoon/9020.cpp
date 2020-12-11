#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

vector<int> primes{ 2 };

bool isPrimeNumber(int n)
{
    int root = sqrt(n);
    int p = 0, i = 0;

    if (n == 2) {
        return true;
    }

    while (p <= root) {
        p = primes[i++];
        if (n % p == 0) {
            return false;
        }
    }

    primes.push_back(n);
    return true;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int* result = new int[10001]{ 0, };
    int t, n; cin >> t;

    for (int i = 0; i < 2; i++) {
        result[i] = 1;
    }
    for (int i = 2; i * i <= 10000; i++) {
        if (isPrimeNumber(i)) {
            for (int k = i * 2; k <= 10000; k += i) {
                result[k] = 1;
            }
        }
    }

    int temp, res;
    for (int i = 0; i < t; i++) {
        cin >> n;
        temp = n / 2;
        while (true) {
            if (result[temp] == 0 && result[n-temp] == 0) {
                res = temp;
                break;
            }
            else {
                temp--;
            }
        }
        cout << res << " " << n - res << "\n";
    }

    return 0;
}