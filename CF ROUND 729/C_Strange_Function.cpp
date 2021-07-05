// Problem link : https://codeforces.com/contest/1542/problem/C


#include <bits/stdc++.h>
#define ed "\n"
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--)
    {
        ll n;
        cin >> n;

        ll ans = 0, lcm = 1, i = 2, mod = 1000000007;

        while (lcm <= n)
        {
            ll before = n / lcm;

            lcm = lcm * i / __gcd(lcm, i);

            ll after = n / lcm;

            ans += (i * (before - after));
            ans %= mod;
            i++;
        }

        cout << ans << ed;
    }
    return 0;
}
