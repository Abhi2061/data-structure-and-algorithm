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
        ll first = 0, second = 0;
        int N, K;
        cin>>N>>K;

        vector<ll> A(N);

        for(ll &it : A)
        cin>>it;

        sort(A.begin(), A.end(), greater<ll>());

        for(int i=1; i<=(2*K); i++)
        {
            if(i%2)
            first += A[i-1];
            else
            second += A[i-1];
        }

        second += A[2*K];

        cout<<max(first, second)<<"\n";
    }
    return 0;
}