#include<iostream>

using namespace std;

int main(void)
{
    int n; cin >> n;
    int temp, count = 0;
    int j;
    bool flag;

    for (int i = 0; i < n; i++) {
        cin >> temp;

        flag = true;
        j = 0;
        if (temp == 1) {
            flag = false;
        }
		for (j = 2; (j * j) < temp; j++) {
			if (temp % j == 0) {
                flag = false;
			}
		}
        if (j * j == temp) {
            flag = false;
        }

        if (flag) {
            count++;
        }
    }

    cout << count;

    return 0;
}