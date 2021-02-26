#include<iostream>

using namespace std;

int main(void)
{
    int t; cin >> t;
    string str;
    int temp;
    int cut[9] = { 97, 90, 87, 80, 77, 70, 67, 60, 0 };
    string grade[9] = { "A+", "A", "B+", "B", "C+", "C", "D+", "D", "F" };

    for (int i = 0; i < t; i++) {
        cin >> str >> temp;
        for (int j = 0; j < 9; j++) {
            if (temp >= cut[j]) {
                cout << str << " " << grade[j] << "\n";
                break;
            }
        }
    }

    return 0;
}