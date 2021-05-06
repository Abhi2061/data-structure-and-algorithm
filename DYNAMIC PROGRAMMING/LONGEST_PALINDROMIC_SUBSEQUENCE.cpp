#include<bits/stdc++.h>
using namespace std;

int longestPalinSubseq (string A);
int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << longestPalinSubseq (s) << endl;
    }
}

int longestPalinSubseq (string S)
{
    int x = S.length();
    string T = S;
    
    reverse(T.begin(), T.end());
    
    int dp[x+1][x+1];
    
    for(int i=0; i<=x; i++)
    {
        for(int j=0; j<=x; j++)
        {
            if(i == 0 || j == 0)
            dp[i][j] = 0;
            
            else if(S[i-1] == T[j-1])
            dp[i][j] = dp[i-1][j-1] + 1;
            
            else
            dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    
    return dp[x][x];
}