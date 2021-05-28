// Problem link : https://www.codechef.com/MAY21C/problems/MODEQ


#include <bits/stdc++.h>
using namespace std;
using ll = long long;

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
        ll N, M, ans = 0;
        cin>>N>>M;

        vector<ll> mod(N+1, 1);

        for(ll i=2; i<=N; i++)
        {
            ll a = M%i;
            ans += mod[a];

            for(int j=a; j<=N; j+=i)
            mod[j]++;
        }

        cout<<ans<<"\n";
    }
    return 0;
}