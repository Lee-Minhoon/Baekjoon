#include<iostream>
#include<cmath>

using namespace std;

int main(void)
{
    int n; cin >> n;
    int cnt[8001] = { 0, };
    double sum = 0;
    int median = 0;
    int mode = 0;

    int min = 4000, max = -4000;
    for (int i = 0; i < n; i++) {
        int temp; cin >> temp;
        sum += temp;
        cnt[temp + 4000]++;
        if (temp > max) {
            max = temp;
        }
        if (min > temp) {
            min = temp;
        }
    }

    bool median_check = true;
    int median_cnt = 0;
    int mode_cnt = 0;
    for (int i = 0; i < 8001; i++) {
        median_cnt += cnt[i];
        if (median_check && median_cnt >= n / 2 + 1) {
            median = i - 4000;
            median_check = false;
        }
        if (cnt[i] > mode_cnt) {
            mode_cnt = cnt[i];
        }
    }

    int mode_check = 0;
    for (int i = 0; i < 8001; i++) {
        if (cnt[i] == mode_cnt) {
            mode_check++;
            if (mode_check <= 2) {
                mode = i - 4000;
            }
            else {
                break;
            }
        }
    }

    cout << floor(sum / n + 0.5) << endl;
    cout << median << endl;
    cout << mode << endl;
    cout << max - min << endl;

    return 0;
}