#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(void)
{
    int temp;
    vector<int> vec;
    vector<int>::iterator iter;

    for (int i = 0; i < 3; i++) {
        cin >> temp; vec.push_back(temp);
    }
    
    sort(vec.begin(), vec.end());

    for (iter = vec.begin(); iter < vec.end(); iter++) {
        cout << *iter << " ";
    }
    
    return 0;
}