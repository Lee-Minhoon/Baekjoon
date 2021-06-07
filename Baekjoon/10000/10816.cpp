#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX = 20000001;
const int CON = 10000000;
// 이미 한번 탐색한 숫자인지, 몇 개를 찾았었는지 저장하는 캐시
pair<bool, int> cache[MAX];

int binarySearch(const vector<int>& cards, int number)
{
    // 찾은 카드 개수
    int ret = 0;
    // 이분 탐색을 위한 변수 선언
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
        // 카드를 찾게 됨
        else {
            // 카드 개수 하나 증가시키고
            ret++;
            // 좌우로 탐색 시작, 정렬되어 있기 때문에 붙어있음
            int left = mid - 1, right = mid + 1;
            // 범위를 벗어나지 않고 찾는 숫자와 같다면
            while (left >= 0 && cards[left--] == number) {
                ret++;
            }
            // 범위를 벗어나지 않고 찾는 숫자와 같다면
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

    // 가지고 있는 카드를 입력받는다.
    vector<int> cards(n);
    for (int i = 0; i < n; i++) {
        cin >> cards[i];
    }

    // 이분 탐색을 위한 정렬
    sort(cards.begin(), cards.end());

    int m; cin >> m;

    // 찾을 숫자를 입력받아 이분 탐색한다.
    for (int i = 0; i < m; i++) {
        int temp; cin >> temp;
        // 찾지 않았던 숫자라면
        if (!cache[temp + CON].first) {
            cache[temp + CON].first = true;
            cache[temp + CON].second = binarySearch(cards, temp);
        }
        cout << cache[temp + CON].second << ' ';
    }

    return 0;
}