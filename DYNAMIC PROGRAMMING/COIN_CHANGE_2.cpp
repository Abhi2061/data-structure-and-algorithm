// Problem link : https://leetcode.com/problems/coin-change/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int coinChange(vector<int> &coins, int amount)
{
    int n = coins.size();

    int dp[n + 1][amount + 1];

    for (int i = 0; i <= amount; i++)
        dp[0][i] = INT_MAX - 1;

    for (int i = 1; i <= n; i++)
        dp[i][0] = 0;

    for (int i = 1; i <= amount; i++)
    {
        if (i % coins[0])
            dp[1][i] = INT_MAX - 1;
        else
            dp[1][i] = i / coins[0];
    }

    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= amount; j++)
        {
            if (coins[i - 1] <= j)
                dp[i][j] = min((1 + dp[i][j - coins[i - 1]]), dp[i - 1][j]);
            else
                dp[i][j] = dp[i - 1][j];
        }
    }

    if (dp[n][amount] == (INT_MAX - 1))
        return -1;

    return dp[n][amount];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int T;
    cin >> T;

    while (T--)
    {
        int n, amount;
        cin>>n;

        vector<int> coins(n);

        for(int &it : coins)
        cin>>it;

        cin>>amount;

        cout<<coinChange(coins, amount)<<"\n";
    }
    return 0;
}