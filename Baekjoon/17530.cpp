#include<iostream>

using namespace std;

int main(void)
{
    int t; cin >> t;
    int score, c;
    bool e = true;

    for (int i = 0; i < t; i++) {
        cin >> score;
        if (i == 0) {
            c = score;
        }
        else {
            if (score > c) {
                e = false;
            }
        }
    }

    if (e) {
        cout << "S";
    }
    else {
        cout << "N";
    }

    return 0;
}