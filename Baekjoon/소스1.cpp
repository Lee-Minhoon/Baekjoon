#include <iostream>
#include <vector>

using namespace std;

void main(void)
{
    char* sPtr;
    int maxSLen;
    cout << "최대 길이 : ";
    cin >> maxSLen;

    sPtr = new char[maxSLen];
    cout << "단어 입력 : ";
    cin >> sPtr;

    for (char* p = sPtr; p < sPtr + maxSLen; p++) {
        cout << *p << endl;
    }

    return;
}