#include <iostream>

using namespace std;

int center = 23;

void star(int i, int j, int num)
{
	// int center = (num * 2 - 1) / 2;
	if (i / num == 0 && i % num == 0 && j == center) cout << '*';
	else if ((i + 1) % num == 0) cout << '*';
	else if (i == abs(center - j)) cout << '*';
	else {
		// cout << ' ';
		if (num == 3) cout << ' ';
		else star(i, j, num / 2);
	}
}

int main(void)
{
	int N; cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N * 2 - 1; j++) {
			star(i, j, N);
		}
		cout << '\n';
	}

	return 0;
}