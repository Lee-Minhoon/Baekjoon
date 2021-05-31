#include<iostream>

using namespace std;

int main(void)
{
    int n, m; cin >> n >> m;
    int package = 100000, piece = 100000;
    int res = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < 2; j++) {
            int tmp; cin >> tmp;
            if (j == 0) {
                package = min(package, tmp);
            }
            else {
                piece = min(piece, tmp);
            }
        }
    }

    if (n >= 6) {
        if (package < piece * 6) {
            res += (n / 6) * package;
            n = n - ((n / 6) * 6);
        }
        else {
            res += n * piece;
            n = 0;
        }
    }

    if (n != 0) {
        package < piece* n ? res += package : res += piece * n;
    }

    cout << res;

    return 0;
}