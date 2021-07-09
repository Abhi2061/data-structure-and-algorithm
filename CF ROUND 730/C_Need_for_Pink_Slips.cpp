// Problem link : https://codeforces.com/contest/1543/problem/C


#include <bits/stdc++.h>
#define ed "\n"
using namespace std;
using ll = long long;
using ld = long double;

ld r = 1000000000;

ld check(ld c, ld m, ld p, ld v, ld len)
{
    ld ans = (p / r) * len, d = 2;

    if (c > 0)
    {
        if (c > v)
        {
            if (m > 0)
                ans += (c / r) * check(c - v, m + (v / d), p + (v / d), v, len + 1);
            else
                ans += (c / r) * check(c - v, m, p + v, v, len + 1);
        }
        else
        {
            if (m > 0)
                ans += (c / r) * check(0, m + (c / d), p + (c / d), v, len + 1);
            else
                ans += (c / r) * check(0, m, p + c, v, len + 1);
        }
    }

    if (m > 0)
    {
        if (m > v)
        {
            if (c > 0)
                ans += (m / r) * check(c + (v / d), m - v, p + (v / d), v, len + 1);
            else
                ans += (m / r) * check(c, m - v, p + v, v, len + 1);
        }
        else
        {
            if (c > 0)
                ans += (m / r) * check(c + (m / d), 0, p + (m / d), v, len + 1);
            else
                ans += (m / r) * check(c, 0, p + m, v, len + 1);
        }
    }

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
        ld c, m, p, v, ans;
        cin >> c >> m >> p >> v;

        c *= r;
        m *= r;
        p *= r;
        v *= r;

        ans = check(c, m, p, v, 1);

        cout << setprecision(12) << ans << ed;
    }
    return 0;
}