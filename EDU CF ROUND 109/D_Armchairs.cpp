// Problem link : https://codeforces.com/contest/1525/problem/D


#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll dp[5005][5005];
vector<int> F, E;

ll solve(int i, int j)
{
    if(i >= F.size())
    return 0;

    if(j >= E.size())
    return INT_MAX-1;

    if(dp[i][j] != -1)
    return dp[i][j];

    dp[i][j] = min(abs(F[i] - E[j]) + solve(i+1,j+1), solve(i, j+1));

    return dp[i][j];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for(int i=0; i<5005; i++)
    {
        for(int j=0; j<5005; j++)
        dp[i][j] = -1;
    }

    int temp, N;
    cin>>N;   

    for(int i=0; i<N; i++)
    {
        cin>>temp;

        if(temp)
        F.push_back(i);
        else
        E.push_back(i);
    }

    if(F.size() == 0)
    cout<<0<<"\n";
    else
    cout<<solve(0,0)<<"\n";

    return 0;
}