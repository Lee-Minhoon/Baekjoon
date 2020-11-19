#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(void)
{
	int testCase, a, b, g, l;

	cin >> testCase;

	for (int i = 0; i < testCase; i++) {
		vector<int> cDivisor;
		int cMultiple = 1;

		cin >> a;
		cin >> b;

		if (a >= b) {
			g = a;
			l = b;
		}
		else {
			g = b;
			l = a;
		}

		int j;
		for (j = 1; (j * j) < l; j++) {
			if (l % j == 0) {
				if (g % j == 0)
				cDivisor.push_back(j);
				if (g % (l / j) == 0) {
					cDivisor.push_back(l / j);
				}
			}
		}

		if (j * j == l && g % j == 0) {
			cDivisor.push_back(j);
		}

		sort(cDivisor.begin(), cDivisor.end());

		cMultiple = a * b / cDivisor.back();
		cout << cMultiple << endl;
	}
	
	return 0;
}