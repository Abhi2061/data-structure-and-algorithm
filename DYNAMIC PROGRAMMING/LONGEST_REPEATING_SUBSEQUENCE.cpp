// Problem link : https://practice.geeksforgeeks.org/problems/longest-repeating-subsequence2004/1#

#include<bits/stdc++.h>
using namespace std;


class Solution {
	public:
		int LongestRepeatingSubsequence(string str){

		    int m = str.length();
		    
		    int dp[m+1][m+1];
		    
		    for(int i=0; i<=m; i++)
		    {
		        for(int j=0; j<=m; j++)
		        {
		            if(i == 0 || j == 0)
		            dp[i][j] = 0;
		            
		            else if(str[i-1] == str[j-1] && i != j)
		            dp[i][j] = dp[i-1][j-1] + 1;
		            
		            else
		            dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
		        }
		    }
		    
		    return dp[m][m];
		}

};

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}