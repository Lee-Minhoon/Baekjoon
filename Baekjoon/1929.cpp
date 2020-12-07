#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

vector<int> primes{ 2 };
vector<int>::iterator iter;

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

    int n, m; cin >> n >> m;
    int* result = new int[1000001]{ 0, };
    
    for (int i = 0; i < 2; i++) {
        result[i] = 1;
    }

    for (int i = 2; i * i <= m; i++) {
        if (isPrimeNumber(i)) {
            for (int k = i * 2; k <= m; k += i) {
                result[k] = 1;
            }
        }
    }

    for (int i = n; i <= m; i++) {
        if (result[i] == 0) {
            cout << i << "\n";
        }
    }

    return 0;
}