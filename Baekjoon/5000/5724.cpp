#include<iostream>

using namespace std;

int main(void)
{
    int result, temp;

    cin >> temp;
    while (temp != 0) {
        result = 0;
        for (int i = 1; i <= temp; i++) {
            result += i * i;
        }
        cout << result << "\n";
        cin >> temp;
    }

    return 0;
}