#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(void)
{
    int n; cin >> n;
    vector<int> number;

    int i = 666, cnt = 0;
    while (cnt <= 10000) {
        if (to_string(i).find("666") != string::npos) {
            cnt++;
            number.push_back(i);
        }
        i++;
    }

    cout << number[n - 1];

    return 0;
}