#include <iostream>
#include <vector>

using namespace std;

void main(void)
{
    char* sPtr;
    int maxSLen;
    cout << "�ִ� ���� : ";
    cin >> maxSLen;

    sPtr = new char[maxSLen];
    cout << "�ܾ� �Է� : ";
    cin >> sPtr;

    for (char* p = sPtr; p < sPtr + maxSLen; p++) {
        cout << *p << endl;
    }

    return;
}