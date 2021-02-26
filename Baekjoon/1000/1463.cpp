#include<iostream>
#include<algorithm>

int dp[1000001] = { 0, };

int main(void)
{
    int temp;

    std::cin >> temp;
    while (temp > 1)
    {
        if (dp[temp - 1] == 0) dp[temp - 1] = dp[temp] + 1;
        else dp[temp - 1] = std::min(dp[temp] + 1, dp[temp - 1]);
        if (temp % 2 == 0)
        {
            if (dp[temp / 2] == 0) dp[temp / 2] = dp[temp] + 1;
            else dp[temp / 2] = std::min(dp[temp] + 1, dp[temp / 2]);
        }
        if (temp % 3 == 0)
        {
            if (dp[temp / 3] == 0) dp[temp / 3] = dp[temp] + 1;
            else dp[temp / 3] = std::min(dp[temp] + 1, dp[temp / 3]);
        }
            
        temp--;
    }

    std::cout << dp[1];

    return 0;
}