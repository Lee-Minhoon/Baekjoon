#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(void)
{
    int num; cin >> num;
    vector<int> vec;

    while (num > 0) {
        vec.push_back(num % 10);
        num /= 10;
    }

    sort(vec.rbegin(), vec.rend());
    
    for (vector<int>::iterator iter = vec.begin(); iter < vec.end(); iter++) {
        cout << *iter;
    }

    return 0;
}