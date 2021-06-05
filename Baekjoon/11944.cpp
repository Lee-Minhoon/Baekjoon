#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string N;
    int M; cin >> N >> M;
    int len = N.length(), temp = 0;

    if (M < stoi(N) * len) {
        while (temp + len < M) {
            cout << N;
            temp += len;
        }
        cout << N.substr(0, M - temp);
    }
    else {
        for (int i = 0; i < stoi(N); i++) {
            cout << N;
        }
    }
      
    return 0;
}