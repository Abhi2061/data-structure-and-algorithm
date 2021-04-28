// Problem link : https://practice.geeksforgeeks.org/problems/subset-sum-problem2014/1#

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    
    int equalPartition(int N, int arr[])
    {
        int sum = 0;
        
        for(int i=0; i<N; i++)
        sum += arr[i];
        
        if(sum % 2)
        return 0;
        
        else 
        return subset_sum(arr, N, sum/2);
    }
    
    bool subset_sum(int A[], int n, int B)
    {
        bool dp[n+1][B+1];
        
        for(int i=0; i<n+1; i++)
        {
            for(int j=0; j<B+1; j++)
            {
                if(j == 0)
                dp[i][j] = true;
                
                else if(i == 0)
                dp[i][j] = false;
                
                else if(A[i-1] <= j)
                dp[i][j] = dp[i-1][j-A[i-1]] || dp[i-1][j];
                
                else
                dp[i][j] = dp[i-1][j];
            }
        }
        
        return dp[n][B];
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}