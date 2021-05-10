// Problem link : https://codeforces.com/contest/1519/problem/D

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    vector<ll> A(n), B(n);

    for(ll &it : A)
    cin>>it;

    for(ll &it : B)
    cin>>it;

    vector<ll> pre_sum(n), rev_pre_sum(n);

    pre_sum[0] = A[0]*B[0];
    rev_pre_sum[n-1] = A[n-1]*B[n-1];

    for(int i=1; i<n; i++)
    pre_sum[i] = pre_sum[i-1] + (A[i]*B[i]);

    for(int i=n-2; i>=0; i--)
    rev_pre_sum[i] = rev_pre_sum[i+1] + (A[i]*B[i]);

    ll max = pre_sum[n-1], dp[n][n];

    for(int k=1; k<=n; k++)
    {
        for(int i=0; i+k <= n; i++)
        {
            int j = i+k-1;

            if(k == 1)
            dp[i][j] = A[i]*B[i];

            else if(k == 2)
            dp[i][j] = A[i]*B[j] + A[j]*B[i];

            else
            dp[i][j] = dp[i+1][j-1] + A[i]*B[j] + A[j]*B[i];
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            ll sum = dp[i][j];

            if(i > 0)
            sum += pre_sum[i-1];

            if(j < n-1)
            sum += rev_pre_sum[j+1];

            if(sum > max)
            max = sum;
        }
    }

    cout<<max<<"\n";
    return 0;
}