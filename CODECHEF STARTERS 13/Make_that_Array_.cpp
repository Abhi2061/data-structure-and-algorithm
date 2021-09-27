// Problem link : https://www.codechef.com/START13B/problems/SWAPGAME


#include <bits/stdc++.h>
#define ed "\n"
#define all(x) x.begin(), x.end()
#define input(x)       \
    for (auto &it : x) \
    cin >> it
#define output(x, y)  \
    for (auto it : x) \
    cout << it << y
#define MOD 1e9 + 7

using namespace std;
using ll = long long;

int power(ll x, ll y, ll p)
{
    int res = 1;

    x = x % p;

    if (x == 0)
        return 0;

    while (y > 0)
    {

        if (y & 1)
            res = (res * x) % p;

        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--)
    {
        ll N;
        cin>>N;

        vector<ll> A(N), B(N);

        input(A);
        input(B);

        ll points = 0;

        for(ll i=0; i<N; i++)
        {
            points -= (i+1)*A[i];
            points += (i+1)*B[i];
        }

        cout<<points<<ed;
    }
    
    return 0;
}