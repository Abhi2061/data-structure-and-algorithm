// Problem link : https://www.interviewbit.com/problems/subset-sum-problem/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int subset_sum(vector<int> A, int B)
{
    int n = A.size();
    int dp[n+1][B+1];
    
    for(int i=0; i<n+1; i++)
    {
        for(int j=0; j<B+1; j++)
        {
            if(j == 0)
            dp[i][j] = 1;
            
            else if(i == 0)
            dp[i][j] = 0;
            
            else if(A[i-1] <= j)
            dp[i][j] = max(dp[i-1][j-A[i-1]], dp[i-1][j]);
            
            else
            dp[i][j] = dp[i-1][j];
        }
    }
    
    return dp[n][B];
}
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
        int N, sum;
        cin>>N;

        vector<int> A(N);

        for(int &it : A)
        cin>>it;

        cin>>sum;

        if(subset_sum(A, sum))
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}