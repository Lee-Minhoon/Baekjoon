#include <iostream>

using namespace std;

const int MAX = 26;

int arr[MAX];

bool flag;

int main(void)
{
    int N; cin >> N;

    while (N--) {
        string s; cin >> s;
        arr[s[0] - 97]++;
        if (arr[s[0] - 97] >= 5) {
            flag = true;
        }
    }

    if (flag) {
        for (int i = 0; i < MAX; i++) {
            if (arr[i] >= 5) {
                printf("%c", i + 97);
            }
        }
    }
    else {
        cout << "PREDAJA";
    }

    return 0;
}