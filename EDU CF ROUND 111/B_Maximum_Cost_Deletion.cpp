// Problem link : https://codeforces.com/contest/1550/problem/B


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
        int n, a, b, ans;
        cin >> n >> a >> b;

        string S;
        cin >> S;

        ans = a * n;

        if (b >= 0)
            ans += b * n;

        else
        {
            char prev = '#';
            int m = 0, k;

            for (char it : S)
            {
                if (it != prev)
                {
                    prev = it;
                    m++;
                }
            }

            k = (m / 2) + 1;
            ans += b * k;
        }

        cout << ans << ed;
    }
    return 0;
}