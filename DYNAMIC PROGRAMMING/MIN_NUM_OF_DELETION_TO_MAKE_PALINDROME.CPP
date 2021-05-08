// Problem link : https://practice.geeksforgeeks.org/problems/minimum-deletitions1648/1

#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int minimumNumberOfDeletions(string S) { 

        string T = S;
        
        reverse(T.begin(), T.end());
        
        int x = S.size();
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
        
        return x - dp[x][x];
    } 
};

int main(){
    int t;
    cin >> t;
    while(t--){
        string S;
        cin >> S;
        Solution obj;
        cout << obj.minimumNumberOfDeletions(S) << endl;
    }
return 0;
}