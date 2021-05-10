// Problem link : https://codeforces.com/contest/1519/problem/C

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
 
    int T;
    cin>>T;

    while(T--)
    {
        ll n;
        cin>>n;

        vector<ll> u(n,0), s(n,0), S[n+1], ans(n+1,0);
    
        for(ll &it : u)
        cin>>it;

        for(ll &it : s)
        cin>>it;

        for(ll i=0; i<n; i++)
        S[u[i]].push_back(s[i]);

        for(ll i=1; i<=n; i++)
        {
            ll sz = S[i].size();

            sort(S[i].begin(), S[i].end(), greater<ll>());       
            
            for(ll j=1; j<sz; j++)
            S[i][j] += S[i][j-1];

            for(ll k=1; k<=sz; k++)
            ans[k] += S[i][sz - (sz%k) - 1];
        }

        for(int i=1; i<=n; i++)
        cout<<ans[i]<<" ";

        cout<<"\n";
    }
    return 0;
}