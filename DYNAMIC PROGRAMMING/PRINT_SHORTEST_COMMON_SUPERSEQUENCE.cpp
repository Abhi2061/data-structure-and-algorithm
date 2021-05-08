// Problem link : https://leetcode.com/problems/shortest-common-supersequence/

#include<bits/stdc++.h>
using namespace std;

string shortestCommonSupersequence(string str1, string str2) {
    int m = str1.size(), n = str2.size(), i, j, p = 0;
    string lcs, ans;
    int dp[m+1][n+1];
    
    for(i=0; i<=m; i++)
    {
        for(j=0; j<=n; j++)
        {
            if(i == 0 || j == 0)
                dp[i][j] = 0;
            
            else if(str1[i-1] == str2[j-1])
                dp[i][j] = dp[i-1][j-1] + 1;
            
            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    
    i = m;
    j = n;
    
    while(i > 0 && j > 0)
    {
        if(dp[i][j] == dp[i-1][j])
            i--;
        else if(dp[i][j] == dp[i][j-1])
            j--;
        else
        {
            lcs.push_back(str1[i-1]);
            i--;
            j--;                    
        }
    }
    
    reverse(lcs.begin(), lcs.end());
    
    i = j = 0;
    
    while(i < m && j < n && p < dp[m][n])
    {
        if(str1[i] == str2[j])
        {
            ans.push_back(lcs[p++]);
            i++;
            j++;
        }
        
        else if(str1[i] == lcs[p])
        ans.push_back(str2[j++]);
        
        else if(str2[j] == lcs[p])
        ans.push_back(str1[i++]);
        
        else
        {
            ans.push_back(str1[i++]);
            ans.push_back(str2[j++]);
        }
    }
    
    while(i < m)
        ans.push_back(str1[i++]);
    
    while(j < n)
        ans.push_back(str2[j++]);
    
    return ans;
}

int main()
{
    string str1, str2;
    cin>>str1;
    cin>>str2;

    cout<<shortestCommonSupersequence(str1, str2);
}
