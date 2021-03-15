#include<iostream>
#include<string>

using namespace std;

int front, rear;
bool r, ret;

void inputArray(string arr, int* nums, int size)
{
    int len = arr.length();
    int idx = 0;
    string tmp;
    for (int i = 1; i < len; i++) {
        if ('0' <= arr[i] && arr[i] <= '9') tmp = tmp + arr[i];
        else {
            if (tmp != "") {
                nums[idx] = stoi(tmp);
                tmp = "";
                idx++;
            }
        }
    }
}

bool AC(char func)
{
    if (func == 'R') r = !r;
    else {
        if (r) rear--;
        else front++;
    }
    if (front > rear) return false;
    return true;
}

void printArray(int* nums)
{
    if (!ret) {
        cout << "error\n";
        return;
    }
    cout << "[";
    if (r) {
        for (int i = rear - 1; i >= front; i--) {
            cout << nums[i];
            if (i != front) cout << ",";
        }
    }
    else {
        for (int i = front; i < rear; i++) {
            cout << nums[i];
            if (i != rear - 1) cout << ",";
        }
    }
    cout << "]\n";
}

int main(void)
{
    int t; cin >> t;

    string s, arr;
    int n;
    for (int i = 0; i < t; i++) {
        cin >> s >> n >> arr;
        int* nums = new int[n];
        inputArray(arr, nums, n);
        front = 0, rear = n; r = false;
        int len = s.length();
        for (int j = 0; j < len; j++) {
            ret = AC(s[j]);
        }
        printArray(nums);
    }

    return 0;
}