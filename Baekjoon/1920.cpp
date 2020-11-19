#include<iostream>
#include<queue>
#include<algorithm>

using namespace std;

int FindMaxDigit(int pArray[], int len)
{
    int max = 0;
    int digit = 0;

    for (int i = 0; i < len; i++) {
        if (max < pArray[i]) {
            max = pArray[i];
        }
    }

    for (int i = max; i > 0; i /= 10) {
        digit++;
    }

    return digit;
}

void RadixSort(int pArray[], int len, int digit)
{
    queue<int> q[20];
    int factor = 1;
    int num;

    for (int i = 0; i < digit; i++) {
        int queueSize[20] = { 0, };

        for (int j = 0; j < len; j++) {
            if (pArray[j] > 0) {
                num = (pArray[j] / factor) % 10 + 10;
            }
            else {
                num = (pArray[j] / factor) % 10 + 9;
            }
            q[num].push(pArray[j]);
            queueSize[num]++;
        }

        factor *= 10;
        int j = 0;

        for (int k = 0; k < 20; k++) {
            for (int l = 0; l < queueSize[k]; l++) {
                pArray[j] = q[k].front();
                q[k].pop();
                j++;
            }
        }
    }
}

bool BinarySearch(int pArray[], int len, int findNum)
{
    int start = 0;
    int end = len - 1;
    int mid = (start + end) / 2;

    while (end - start >= 0) {
        if (findNum == pArray[mid]) {
            return true;
        }
        else if (findNum < pArray[mid]) {
            end = mid - 1;
            mid = (start + end) / 2;
        }
        else {
            start = mid + 1;
            mid = (start + end) / 2;
        }
    }

    return false;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;

    cin >> n;
    int* nArray = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> nArray[i];
    }

    cin >> m;
    int* mArray = new int[m];
    for (int i = 0; i < m; i++) {
        cin >> mArray[i];
    }

    RadixSort(nArray, n, FindMaxDigit(nArray, n));

    for (int i = 0; i < m; i++) {
        if (BinarySearch(nArray, n, mArray[i])) {
            cout << "1\n";
        }
        else {
            cout << "0\n";
        }
    }

    return 0;
}