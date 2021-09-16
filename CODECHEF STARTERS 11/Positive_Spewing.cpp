// Problem link : https://www.codechef.com/START11B/problems/POSSPEW


#include <bits/stdc++.h>
#define ed "\n"
#define all(x) x.begin(), x.end()
#define input(x)       \
    for (auto &it : x) \
    cin >> it
#define output(x, y)  \
    for (auto it : x) \
    cout << it << y

using namespace std;
using ll = long long;

ll nearPos(vector<ll> &A, ll p, ll N)
{
    if(A[p] > 0)
    return 0;

    for(ll i=1; i<N; i++)
    {
        if(A[(p+i)%N] > 0)
        return i;

        if(A[(p-i+N)%N] > 0)
        return i;
    }

    return N;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--)
    {
        ll N, K;
        cin >> N >> K;

        vector<ll> A(N);

        input(A);

        ll sum = 0;

        for(ll it : A)
        sum += it;

        if(sum == 0)
        cout<<0<<ed;

        else
        {
            for(ll i=0; i<N; i++)
            {
                ll x = nearPos(A, i, N);
                ll p = K-x;

                if(p > 0)
                sum += 2*p;
            }

            cout<<sum<<ed;
        }
    }

    return 0;
}