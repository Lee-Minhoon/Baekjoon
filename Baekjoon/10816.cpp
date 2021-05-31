#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX = 20000001;
const int CON = 10000000;
// �̹� �ѹ� Ž���� ��������, �� ���� ã�Ҿ����� �����ϴ� ĳ��
pair<bool, int> cache[MAX];

int binarySearch(const vector<int>& cards, int number)
{
    // ã�� ī�� ����
    int ret = 0;
    // �̺� Ž���� ���� ���� ����
    int start = 0;
    int end = cards.size() - 1;
    int mid = (start + end) / 2;

    while (end - start >= 0) {
        if (cards[mid] < number) {
            start = mid + 1;
        }
        else if (cards[mid] > number) {
            end = mid - 1;
        }
        // ī�带 ã�� ��
        else {
            // ī�� ���� �ϳ� ������Ű��
            ret++;
            // �¿�� Ž�� ����, ���ĵǾ� �ֱ� ������ �پ�����
            int left = mid - 1, right = mid + 1;
            // ������ ����� �ʰ� ã�� ���ڿ� ���ٸ�
            while (left >= 0 && cards[left--] == number) {
                ret++;
            }
            // ������ ����� �ʰ� ã�� ���ڿ� ���ٸ�
            while (right < cards.size() && cards[right++] == number) {
                ret++;
            }
            break;
        }
        mid = (start + end) / 2;
    }

    return ret;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; cin >> n;

    // ������ �ִ� ī�带 �Է¹޴´�.
    vector<int> cards(n);
    for (int i = 0; i < n; i++) {
        cin >> cards[i];
    }

    // �̺� Ž���� ���� ����
    sort(cards.begin(), cards.end());

    int m; cin >> m;

    // ã�� ���ڸ� �Է¹޾� �̺� Ž���Ѵ�.
    for (int i = 0; i < m; i++) {
        int temp; cin >> temp;
        // ã�� �ʾҴ� ���ڶ��
        if (!cache[temp + CON].first) {
            cache[temp + CON].first = true;
            cache[temp + CON].second = binarySearch(cards, temp);
        }
        cout << cache[temp + CON].second << ' ';
    }

    return 0;
}