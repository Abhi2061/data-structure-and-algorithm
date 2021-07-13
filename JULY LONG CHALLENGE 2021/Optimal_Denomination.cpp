// Problem link : https://www.codechef.com/JULY21C/problems/MINNOTES/


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
        int n;
        cin >> n;

        vector<int> A(n), pre_gcd(n), suf_gcd(n);
        ll total = 0, ans = LLONG_MAX;

        for (int &it : A)
        {
            cin >> it;
            total += (ll)it;
        }

        if (n == 1)
        {
            cout << 1 << ed;
            continue;
        }

        int prev = A[0];

        for (int i = 0; i < n; i++)
        {
            prev = __gcd(prev, A[i]);
            pre_gcd[i] = prev;
        }

        prev = A[n - 1];

        for (int i = n - 1; i >= 0; i--)
        {
            prev = __gcd(prev, A[i]);
            suf_gcd[i] = prev;
        }

        for (int i = 0; i < n; i++)
        {
            ll gcd;

            if (i == 0)
            gcd = suf_gcd[1];
            else if (i == n - 1)
            gcd = pre_gcd[n - 2];
            else
            gcd = __gcd(pre_gcd[i - 1], suf_gcd[i + 1]);

            ans = min(ans, (total-A[i]) / gcd);
        }

        cout << ans+1 << ed;
    }
    return 0;
}