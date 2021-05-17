#include<iostream>
#include<cmath>

using namespace std;

int mid;

void star(int y, int x, int num, int top, int bot)
{
    // �º��� �캯�� ��ġ
    int left = mid - abs(top - y);
    int right = mid + abs(top - y);
    // y��ǥ�� �ϴܰ� ���� x��ǥ�� �º��� �캯 �����ȿ� �����ִٸ� '*' ���
    if (y == bot && x >= left && x <= right) cout << '*';
    else if (x == left || x == right) {
        // x��ǥ�� �º��� �캯�� ��ġ�� ���� y��ǥ�� ��ܰ� �ϴ� �����ȿ� �����ִٸ� '*' ���
        if ((top > bot ? top : bot) >= y && (top < bot ? top : bot) <= y) cout << '*';
        // �ƴ϶�� ���� ���
        else cout << ' ';
    }
    else {
        // ��𿡵� ������ �ʴ� �κ��� ���� ���
        if (num == 1) cout << ' ';
        // ��ܰ� �ϴ� ��ġ�� �����Ͽ� ��� ȣ��
        else star(y, x, num - 1, num % 2 == 0 ? bot + 1 : bot - 1, (top + bot) / 2);
    }
}

int main(void)
{
    int n; cin >> n;
    int height = pow(2, n) - 1;
    int width = height * 2 - 1;
    mid = width / 2;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < (n % 2 == 0 ? width - i : width - (mid - i)); j++) {
            // ���� ū �ﰢ���� ���°� ���ﰢ���̶��
            if (n % 2 == 0) star(i, j, n, height - 1, 0);
            // �ƴ϶��
            else star(i, j, n, 0, height - 1);
        }
        cout << '\n';
    }

    return 0;
}