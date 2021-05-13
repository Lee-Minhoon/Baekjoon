#include <iostream>

using namespace std;

void star(int i, int j, int num)
{
	if (i / num % 3 == 1 && j / num % 3 == 1) {
		cout << ' ';
	}
	else {
		if (num == 1) {
			cout << '*';
		}
		else {
			star(i, j, num / 3);
		}
	}
}

int main(void)
{
	int N; cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			star(i, j, N / 3);
		}
		cout << '\n';
	}

	return 0;
}