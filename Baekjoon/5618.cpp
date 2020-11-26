#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(void)
{
    short testCase; cin >> testCase;
    vector<int> num;
	vector<int> factor;
	vector<int>::iterator iter;
    int temp;

    for (short i = 0; i < testCase; i++) {
        cin >> temp;
        num.push_back(temp);
    }

    sort(num.begin(), num.end());

	int j;
	int m = testCase - 1;
	for (j = 1; (j * j) < num[0]; j++) {
		if (num[0] % j == 0) {
			if (num[1] % j == 0 && num[m] % j == 0) {
				factor.push_back(j);
			}
			if (num[1] % (num[0] / j) == 0 && num[m] % (num[0] / j) == 0) {
				factor.push_back(num[0] / j);
			}
		}
	}

	if (j * j == num[0] && num[1] % j == 0 && num[m] % j == 0) {
		factor.push_back(j);
	}

	sort(factor.begin(), factor.end());

	for (iter = factor.begin(); iter < factor.end(); iter++) {
		cout << *iter << endl;
	}

    return 0;
}