#include<iostream>

using namespace std;

void bulk(int* weight, int* height, int n) {
    int rank;

    for (int i = 0; i < n; i++) {
        rank = 1;
        for (int j = 0; j < n; j++) {
            if (j == i) {
                continue;
            }
            if (weight[j] > weight[i] && height[j] > height[i]) {
                rank++;
            }
        }
        cout << rank << "\n";
    }
}

int main(void)
{
    int n; cin >> n;
    int* weight = new int[n];
    int* height = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> weight[i] >> height[i];
    }

    bulk(weight, height, n);

    return 0;
}