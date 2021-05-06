// Problem link : https://practice.geeksforgeeks.org/problems/minimum-number-of-deletions-and-insertions0209/1

#include <bits/stdc++.h>
using namespace std;

class Solution{
		

	public:
	int minOperations(string str1, string str2) 
	{ 
	    int cnt = 0, x = str1.size(), y = str2.size(), lcs;
	    
	    int dp[1001][1001];
	    
	    for(int i=0; i<=x; i++)
	    {
	        for(int j=0; j<=y; j++)
	        {
	            if(i == 0 || j == 0)
	            dp[i][j] = 0;
	            
	            else if(str1[i-1] == str2[j-1])
	            dp[i][j] = 1 + dp[i-1][j-1];
	            
	            else
	            dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
	        }
	    }
	    
	    lcs = dp[x][y];
	    
	    cnt += (x-lcs);
	    
	    cnt += (y-lcs);
	    
	    return cnt;
	} 
};

int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}
