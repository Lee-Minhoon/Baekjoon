#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int M, N; cin >> M >> N;
    
    int i = ceil(sqrt(M));
    // ���� ���� ���� ��
    int min = pow(i++, 2);

    // N���� �۰ų� ������
    if (min <= N) {
        int sum = min;

        for (; i <= floor(sqrt(N)); i++) {
            sum += pow(i, 2);
        }

        cout << sum << endl << min;
    }
    // �Ұ���
    else {
        cout << -1;
    }

    return 0;
}