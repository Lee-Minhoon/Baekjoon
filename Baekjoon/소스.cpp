#include<iostream>

using namespace std;

long long power(int A, int B)
{
	int res = 1;

	for (int i = 0; i < B; i++) {
		res *= A;
	}

	return res;
}

int main(void)
{
	int A = 2;
	int B = 10;
	int C;

	cout << power(A, B);

	return 0;
}