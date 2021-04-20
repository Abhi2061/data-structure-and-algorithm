// Problem link : https://www.codechef.com/COOK128C/problems/BUILDB

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
        ll N, R, max = 0, tension = 0;
        cin>>N>>R;

        vector<ll> A(N), B(N);

        for(ll &it : A)
        cin>>it;

        for(ll &it : B)
        cin>>it;

        max = tension = B[0];

        for(int i=1; i<N; i++)
        {
            ll diff = A[i] - A[i-1];

            diff *= R;

            tension -= diff;

            if(tension < 0)
            tension = 0;

            tension += B[i];

            if(tension > max)
            max = tension;
        }

        cout<<max<<"\n";
    }
    return 0;
}