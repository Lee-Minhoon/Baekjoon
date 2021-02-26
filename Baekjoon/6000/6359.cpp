#include<iostream>

using namespace std;

int run(int rooms[], int room)
{
    int run = 0;

    for (int i = 2; i < room + 1; i++) {
        for (int j = i; j < room + 1; j += i) {
            if (rooms[j] == 1) {
                rooms[j] = 0;
            }
            else {
                rooms[j] = 1;
            }
        }
    }

    for (int i = 1; i < room + 1; i++) {
        run += rooms[i];
    }

    run = room - run;

    return run;
}

int main(void)
{
    int t; cin >> t;
    int room;

    for (int i = 0; i < t; i++) {
        cin >> room;
        int* rooms = new int[room + 1] {0, };
        cout << run(rooms, room) << "\n";
    }

    return 0;
}