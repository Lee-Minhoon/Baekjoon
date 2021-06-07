#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int M, N; cin >> M >> N;
    
    int i = ceil(sqrt(M));
    // 제일 작은 제곱 수
    int min = pow(i++, 2);

    // N보다 작거나 같으면
    if (min <= N) {
        int sum = min;

        for (; i <= floor(sqrt(N)); i++) {
            sum += pow(i, 2);
        }

        cout << sum << endl << min;
    }
    // 불가능
    else {
        cout << -1;
    }

    return 0;
}