#include<iostream>
#include<vector>

using namespace std;

int main(void)
{
    int t; cin >> t;
    int k;
    double totalGrade, aver;

    for (int i = 0; i < t; i++) {
        cin >> k;
        double** grades = new double* [k];
        totalGrade = 0;
        for (int j = 0; j < k; j++) {
            grades[j] = new double[2];
            cin >> grades[j][0] >> grades[j][1];
            totalGrade += grades[j][0];
        }
        aver = 0;
        for (int j = 0; j < k; j++) {
            aver += grades[j][1] * (grades[j][0] / totalGrade);
        }
        cout << totalGrade << " " << aver << "\n";
    }

    return 0;
}