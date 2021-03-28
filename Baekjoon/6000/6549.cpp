#include<iostream>

using namespace std;

const int MAX = 100000;

long long histo[MAX];

long long dv(int left, int right)
{
    if (left == right) return histo[left];

    int mid = (left + right) / 2;
    int lp = mid;
    int rp = mid;
    long long height = histo[mid];
    long long ret = max(dv(left, mid), dv(mid + 1, right));

    while (left < lp || rp < right) {
        if (left < lp && (rp == right || histo[lp - 1] > histo[rp + 1])) {
            lp--;
            height = min(height, histo[lp]);
        }
        else {
            rp++;
            height = min(height, histo[rp]);
        }
        ret = max(ret, height * (rp - lp + 1));
    }
    return ret;
}

int main(void)
{
    int n; cin >> n;

    while (n != 0) {
        for (int i = 0; i < n; i++) {
            cin >> histo[i];
        }
        cout << dv(0, n - 1) << "\n";
        cin >> n;
    }

    return 0;
}