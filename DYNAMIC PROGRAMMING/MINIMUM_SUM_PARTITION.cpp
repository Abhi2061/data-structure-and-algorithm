// Problem link : https://practice.geeksforgeeks.org/problems/minimum-sum-partition3317/1

#include <bits/stdc++.h>
using namespace std;

class Solution{

	public:
	int minDiffernce(int arr[], int n) 
	{ 
	    int sum = 0, s1 = 0, range;
	    
	    for(int i=0; i<n; i++)
	    sum += arr[i];

            range = sum/2;
	    
	    int dp[n+1][range+1];
	    
	    for(int i=0; i<=n; i++)
	    {
	        for(int j=0; j<=range; j++)
	        {
	            if(j == 0)
	            dp[i][j] = 1;
	            
	            else if(i == 0)
	            dp[i][j] = 0;
	            
	            else if(arr[i-1] <= j)
	            dp[i][j] = max(dp[i-1][j-arr[i-1]], dp[i-1][j]);
	            
	            else 
	            dp[i][j] = dp[i-1][j];
	            
	            if(i == n)
	            {
	                if(dp[i][j] == 1)
	                s1 = j;
	            }
	        }
	    }
	    
	    return sum - 2*s1;
	} 
};

int main() 
{ 
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        cin >> a[i];

        Solution ob;
        cout << ob.minDiffernce(a, n) << "\n";
	     
    }
    return 0;
} 
