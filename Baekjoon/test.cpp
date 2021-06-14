#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

template <typename T>
T getMaxValue(T arr[], const int& len)
{
    T temp = 0;

    for (int i = 0; i < len; i++) {
        if (arr[i] > temp) {
            temp = arr[i];
        }
    }

    return temp;
}

template <typename T>
T getMinValue(T arr[], const int& len)
{
    T temp = arr[0];

    for (int i = 1; i < len; i++) {
        if (arr[i] < temp) {
            temp = arr[i];
        }
    }

    return temp;
}

void countingSort(int arr[], int len)
{
    int maxValue = getMaxValue(arr, len);
    int minValue = getMinValue(arr, len);
    int size = maxValue - minValue + 1;
    int* temp = new int[size];

    for (int i = 0; i < size; i++) {
        temp[i] = 0;
    }

    for (int i = 0; i < len; i++) {
        temp[arr[i] - minValue]++;
    }

    int idx = 0;
    for (int i = 0; i < size; i++) {
        while (temp[i]) {
            arr[idx++] = i + minValue;
            temp[i]--;
        }
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; cin >> n;
    int* arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    countingSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << '\n';
    }

    return 0;
}