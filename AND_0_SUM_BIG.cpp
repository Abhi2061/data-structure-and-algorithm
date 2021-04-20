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

    int mod = 1e9 + 7;
    int T;
    cin>>T;

    while(T--)
    {
        ll n, k, ans = 1;
        cin>>n>>k;

        if(n > 1)
        {
            for(int i=0; i<k; i++)
            {
                ans *= n;
                ans %= mod;
            }
        }

        cout<<ans<<"\n";
    }

    return 0;
}