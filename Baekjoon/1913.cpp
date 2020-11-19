#include<iostream>
#include<cmath>

using namespace std;

int* Snail(int** pArray, int len, int findNum)
{
	int size = 1;
	int dis = 0;

	int number = 1;
	int center = len / 2;
	
	int y = center, x = center;
	static int ans[2] = { 0, };
	int flag = 1;

	for(int i = 0; i < len / 2 + 1; i++) {
		while (number <= size) {
			pArray[y][x] = number;
			if (findNum == number) {
				ans[0] = y + 1;
				ans[1] = x + 1;
			}
			number++;
			if (flag == 1) {
				y--;
				if (abs(y - center) >= dis && number != size) {
					flag = 2;
				}
			}
			else if (flag == 2) {
				x++;
				if (abs(x - center) >= dis) {
					flag = 3;
				}
			}
			else if (flag == 3) {
				y++;
				if (abs(y - center) >= dis) {
					flag = 4;
				}
			}
			else if (flag == 4) {
				x--;
				if (abs(x - center) >= dis) {
					flag = 1;
				}
			}
		}
		size = pow((sqrt(size) + 2), 2);
		dis++;
	}

	return ans;
}

int main(void)
{
	int n, num;

	cin >> n;
	int** nArray = new int*[n];
	for (int i = 0; i < n; i++) {
		nArray[i] = new int[n];
	}
	cin >> num;

	int* ansr = Snail(nArray, n, num);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << nArray[i][j] << " ";
		}
		cout << endl;
	}
	cout << ansr[0] << " " << ansr[1];

	return 0;
}