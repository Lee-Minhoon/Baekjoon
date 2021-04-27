#include<iostream>
#include<algorithm>

using namespace std;

typedef struct _Contest {
    int start;
    int end;
    int value;
} Contest;

bool cmp(const Contest& a, const Contest& b)
{
    if (a.end < b.end) return true;
    else return false;
}

void initialize(int arr, const int& m)
{
    for (int i = 0; i < 2; i++) arr[i] = new int[m + 1];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j <= m; j++) {
            arr[i][j] = 0;
        }
    }
}

int main(void)
{
    int t; cin >> t;

    Contest* c = new Contest[t + 1];

    int max_days = 0;
    for (int i = 1; i <= t; i++) {
        cin >> c[i].start >> c[i].end >> c[i].value;
        max_days = max(max_days, c[i].end);
    }

    sort(c + 1, c + 1 + t, cmp);

    int DP = new int* [2];
    initialize(DP, max_days);

    for (int i = 1; i <= t; i++) { // ���� �񱳵ǰ� �ִ� ���׽�Ʈ i
        for (int j = 1; j <= max_days; j++) { // ���� ��¥ j
            // ������ ��ġ�� ���� ���� (���� ��¥�� ���׽�Ʈ ������ ��¥���� �����ϱ� �ش� ���׽�Ʈ�� ����ġ�� ���� ����)
            if (j < c[i].end) DP[i % 2][j] = DP[(i + 1) % 2][j];
            // ������ ��ĥ �� �ִ� ���� (���������� �������� ���ؾ��Ұ��� ������ ������ ���� ���� �� � ���� ��ū��)
            else DP[i % 2][j] = max(DP[(i + 1) % 2][j], DP[(i + 1) % 2][c[i].start - 1] + c[i].value);
        }
    }

    cout << max(DP[0][max_days], DP[1][max_days]);

    return 0;
}