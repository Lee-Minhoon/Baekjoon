#include <iostream>
#include <cstring>

using namespace std;

const int MAX = 26;

int idx;
int arr[MAX];
bool flag;

int main(void)
{
    string s1; cin >> s1;
    string s2; cin >> s2;

    while (s1 != "END" || s2 != "END") {
        flag = true;
        memset(arr, 0, sizeof(arr));

        for (auto i : s1) {
            arr[i - 97]++;
        }
        for (auto i : s2) {
            arr[i - 97]--;
        }

        cout << "Case " << ++idx << ": ";
        for (auto i : arr) {
            if (i != 0) {
                flag = false;
            }
        }

        flag ? cout << "same\n" : cout << "different\n";

        cin >> s1;
        cin >> s2;
    }

    return 0;
}