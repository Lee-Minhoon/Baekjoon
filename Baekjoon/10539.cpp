#include<iostream>
#include<vector>

using namespace std;

int main(void)
{
    short t; cin >> t;
    vector<int> num;
    vector<int>::iterator iter;
    int temp;

    for (short i = 0; i < t; i++) {
        cin >> temp; num.push_back(temp);
    }

    short i = 1;
    int x = 0;
    int sum = 0;
    for (iter = num.begin(); iter < num.end(); iter++) {
        x = *iter * i - sum;
        sum += x;
        cout << x << " ";
        i++;
    }

    return 0;
}