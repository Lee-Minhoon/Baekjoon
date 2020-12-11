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

    int* result = new int[250000]{ 0, };
    int n; cin >> n;
    int res = 0;

    while (n != 0) {
        for (int i = 0; i < 2; i++) {
            result[i] = 1;
        }
        for (int i = 2; i * i <= n * 2; i++) {
            if (isPrimeNumber(i)) {
                for (int k = i * 2; k <= n * 2; k += i) {
                    result[k] = 1;
                }
            }
        }
        for (int i = n + 1; i <= n * 2; i++) {
            if (result[i] == 0) {
                res++;
            }
        }
        cout << res << "\n";
        cin >> n;
        res = 0;
        result = new int[250000]{ 0, };
    }

    return 0;
}