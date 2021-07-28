// Problem link : https://www.codechef.com/START6B/problems/ETUP


#include <bits/stdc++.h>
#define ed "\n"
using namespace std;
using ll = long long;

ll ncr(ll n, ll r)
{
    if (n < r)
        return 0;

    if (n == r)
        return 1;

    ll ans = 1;

    r = max(r, n - r);

    for (ll i = n; i > r; i--)
        ans *= i;

    for (ll i = (n - r); i > 1; i--)
        ans /= i;

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--)
    {
        ll N, Q;
        cin >> N >> Q;

        vector<ll> A(N);

        for (ll &it : A)
            cin >> it;

        vector<ll> E(N+1, 0);

        if (A[0] % 2 == 0)
            E[1]++;

        for (ll i = 1; i < N; i++)
        {
            E[i+1] = E[i];

            if (A[i] % 2 == 0)
                E[i+1]++;
        }

        while (Q--)
        {
            ll L, R;
            cin >> L >> R;

            ll even = E[R] - E[L - 1];
            ll odd = R - L - even + 1;

            ll ans1 = ncr(even, 3);
            ll ans2 = ncr(odd, 2) * even;

            cout << ans1 + ans2 << ed;
        }
    }
    return 0;
}