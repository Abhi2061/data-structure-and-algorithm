// Problem link : https://codeforces.com/contest/1506/problem/C


#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int T;
    cin>>T;

    while(T--)
    {
        int dp[21][21] = {0}, max_len = 0, n, m;
        string a, b;
        cin>>a>>b;

        n = a.length();
        m = b.length();

        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                if(a[i-1] == b[j-1])
                dp[i][j] = 1 + dp[i-1][j-1];

                else
                dp[i][j] = 0;

                max_len = max(max_len, dp[i][j]);                
            }
        }

        cout<<n+m-(2*max_len)<<"\n";
    }
    return 0;
}
