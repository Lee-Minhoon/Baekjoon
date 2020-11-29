#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(void)
{
	int a, b, g, l; cin >> a >> b;
	vector<int> cDivisor;
	int cMultiple = 1;

	if (a >= b) {
		g = a;
		l = b;
	}
	else {
		g = b;
		l = a;
	}

	int i;
	for (i = 1; (i * i) < l; i++) {
		if (l % i == 0) {
			if (g % i == 0)
				cDivisor.push_back(i);
			if (g % (l / i) == 0) {
				cDivisor.push_back(l / i);
			}
		}
	}

	if (i * i == l && g % i == 0) {
		cDivisor.push_back(i);
	}

	sort(cDivisor.begin(), cDivisor.end());

	cMultiple = a * b / cDivisor.back();
	cout << cDivisor.back() << endl;
	cout << cMultiple << endl;

	return 0;
}