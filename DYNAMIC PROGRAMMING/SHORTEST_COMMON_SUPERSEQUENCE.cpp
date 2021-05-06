// Problem link : https://practice.geeksforgeeks.org/problems/shortest-common-supersequence0322/1#

#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    
    int shortestCommonSupersequence(char* X, char* Y, int m, int n)
    {
        int lcs, cnt = 0;
        int dp[m+1][n+1];
        
        for(int i=0; i<=m; i++)
        {
            for(int j=0; j<=n; j++)
            {
                if(i == 0 || j == 0)
                dp[i][j] = 0;
                
                else if(X[i-1] == Y[j-1])
                dp[i][j] = dp[i-1][j-1] + 1;
                
                else
                dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
            }
        }
        
        lcs = dp[m][n];
        
        cnt = lcs;
        cnt += (m-lcs);
        cnt += (n-lcs);
        
        return cnt;
    }
};

int main()
{   
    
    int t;
    char X[10001], Y[10001];
    
    cin >> t;
    while(t--){
    
	cin >> X >> Y;
	
	Solution obj;
	cout << obj.shortestCommonSupersequence(X, Y, strlen(X), strlen(Y))<< endl;
    }
	return 0;
}
