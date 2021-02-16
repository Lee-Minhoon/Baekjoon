#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool cmp(int* a, int* b)
{
    if (a[0] == b[0]) {
        return a[1] < b[1];
    }
    else {
        return a[0] < b[0];
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; cin >> n;
    int** loc = new int* [n];

    for (int i = 0; i < n; i++) {
        loc[i] = new int[2];
        cin >> loc[i][0];
        cin >> loc[i][1];
    }

    sort(loc, loc + n, cmp);

    for (int i = 0; i < n; i++) {
        cout << loc[i][0] << " " << loc[i][1] << "\n";
    }

    return 0;
}