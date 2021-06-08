#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int N; cin >> N;
    cin.ignore();

    for (int i = 1; i <= N; i++) {
        string s; getline(cin, s);
        printf("%d. %s\n", i, s.c_str());
    }

    return 0;
}