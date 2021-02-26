#include<iostream>

using namespace std;

int main(void)
{
	short digit; cin >> digit;
	short num, result = 0;

	for (int i = 0; i < 5; i++) {
		cin >> num;
		if (num == digit) {
			result++;
		}
	}
	cout << result;

	return 0;
}