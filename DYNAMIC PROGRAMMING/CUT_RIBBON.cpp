// Problem link : https://codeforces.com/problemset/problem/189/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int cut_ribbon(int a, int b, int c, int n)
{
    int dp[n + 1];
    dp[0] = 0;
    int x, y, z;

    for (int i = 1; i <= n; i++)
    {
        x = y = z = -1;

        if (i >= a)
            x = dp[i - a];

        if (i >= b)
            y = dp[i - b];

        if (i >= c)
            z = dp[i - c];

        if (x == -1 && y == -1 && z == -1)
            dp[i] = -1;

        else
            dp[i] = max(max(x, y), z) + 1;
    }

    return dp[n];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int a, b, c, n;
    cin >> n >> a >> b >> c;

    cout << cut_ribbon(a, b, c, n) << "\n";

    return 0;
}