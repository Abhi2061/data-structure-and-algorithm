// Problem link : https://www.geeksforgeeks.org/count-of-subsets-with-sum-equal-to-x/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int count_subset(vector<int> A, int sum)
{
    int n = A.size();

    int dp[n+1][sum+1];

    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=sum; j++)
        {
            if(j == 0)
            dp[i][j] = 1;
            else if(i == 0)
            dp[i][j] = 0;
            else if(A[i-1] <= j)
            dp[i][j] = dp[i-1][j-A[i-1]] + dp[i-1][j];
            else
            dp[i][j] = dp[i-1][j];
        }
    }

    return dp[n][sum];
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

        cout<<count_subset(A, sum)<<"\n";
    }
    return 0;
}