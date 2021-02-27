#include<iostream>
#include<vector>

using namespace std;

#define MAX 1001

string input[2];
int DP[MAX][MAX];

int main(void)
{
    cin >> input[0] >> input[1];
    int len[2];
    len[0] = input[0].size();
    len[1] = input[1].size();

    for (int i = 1; i <= len[0]; i++) {
        for (int j = 1; j <= len[1]; j++) {
            if (input[0][i - 1] == input[1][j - 1]) {
                DP[i][j] = DP[i - 1][j - 1] + 1;
            }
            else {
                DP[i][j] = max(DP[i - 1][j], DP[i][j - 1]);
            }
        }
    }

    cout << DP[len[0]][len[1]];

    return 0;
}