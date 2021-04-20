// Problem link : https://codeforces.com/contest/1513/problem/B

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
        int n, mod = 1e9+7;
        cin>>n;

        vector<int> A(n);

        for(int &it : A)
        cin>>it;

        int minE = *min_element(A.begin(), A.end());

        ll cnt = 0, ans = 1;

        for(int it : A)
        {
            if(it == minE)
            cnt++;
            if((it&minE) != minE)
            {
                ans = 0;
                break;
            }
        }

        if(ans)
        {
            ll fact = 1;

            for(ll i=1; i<=n-2; i++)
            fact = (fact*i)%mod;

            ans = (cnt*(cnt-1))%mod;

            ans = (ans*fact)%mod;
        }

        cout<<ans<<"\n";
    }
    return 0;
}