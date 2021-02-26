#include<iostream>

using namespace std;

int main(void)
{
    int n; cin >> n;
    int sum = 0, student, apple;

    for (int i = 0; i < n; i++) {
        cin >> student >> apple;
        sum += apple % student;
    }

    cout << sum;

    return 0;
}