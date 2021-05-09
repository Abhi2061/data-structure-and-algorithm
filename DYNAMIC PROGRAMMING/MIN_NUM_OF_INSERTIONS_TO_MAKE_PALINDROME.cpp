// Problem link : https://practice.geeksforgeeks.org/problems/form-a-palindrome1455/1

#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
    int countMin(string str){

    string strr = str;
    reverse(strr.begin(), strr.end());
    
    int x = str.length();
    
    int dp[x+1][x+1];
    
    for(int i=0; i<=x; i++)
    {
        for(int j=0; j<=x; j++)
        {
            if(i == 0 || j == 0)
            dp[i][j] = 0;
            
            else if(str[i-1] == strr[j-1])
            dp[i][j] = dp[i-1][j-1] + 1;
            
            else
            dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    
    return x-dp[x][x];
    }
};

int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        Solution ob;
        cout << ob.countMin(str) << endl;
    }
return 0;
}
