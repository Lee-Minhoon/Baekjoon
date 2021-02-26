#include<iostream>
#include<vector>

using namespace std;

void merge(vector<int>& vec, int s, int e, int d)
{
    vector<int> temp;
    int i = s, j = d + 1;
    
    while (i <= d && j <= e) {
        if (vec[i] < vec[j]) {
            temp.push_back(vec[i++]);
        }
        else if (vec[j] < vec[i]) {
            temp.push_back(vec[j++]);
        }
    }

    while (i <= d) {
        temp.push_back(vec[i++]);
    }
    while (j <= e) {
        temp.push_back(vec[j++]);
    }

    int index = 0;
    for (int i = s; i <= e; i++) {
        vec[i] = temp[index++];
    }
    
}

void mergeSort(vector<int>& vec, int s, int e)
{
    if (e - s >= 1) {
        int d = (s + e) / 2;
        mergeSort(vec, s, d);
        mergeSort(vec, d + 1, e);
        merge(vec, s, e, d);
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; cin >> n;
    vector<int> vec;

    for (int i = 0; i < n; i++) {
        int temp; cin >> temp;
        vec.push_back(temp);
    }

    mergeSort(vec, 0, n - 1);

    for (vector<int>::iterator i = vec.begin(); i < vec.end(); i++) {
        cout << *i << "\n";
    }

    return 0;
}