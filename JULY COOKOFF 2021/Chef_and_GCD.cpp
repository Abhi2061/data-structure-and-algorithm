// Problem link : https://www.codechef.com/COOK131B/problems/CHFGCD


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
        ll x, y;
        cin >> x >> y;

        ll ans = 0;

        if (x == 1)
        {
            x++;
            ans++;
        }

        if (y == 1)
        {
            y++;
            ans++;
        }

        if (__gcd(x, y) > 1)
            cout << ans << ed;

        else if (__gcd(x + 1, y) > 1)
            cout << ans + 1 << ed;

        else if (__gcd(x, y + 1) > 1)
            cout << ans + 1 << ed;

        else
            cout << ans + 2 << ed;
    }
    return 0;
}