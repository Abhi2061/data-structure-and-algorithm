// Problem link : https://www.codechef.com/START12C/problems/SPATH3


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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--)
    {
        ll N, M, X, Y;
        cin >> N >> M >> X >> Y;

        ll ans = 0;

        if (Y < 2 * X and N > 1 and M > 1)
        {
            ans = Y * (min(N, M) - 1);

            if (Y < X and abs(N - M) > 1)
            {
                ans += Y * abs(N - M);

                if (abs(N - M) % 2)
                {
                    ans -= Y;
                    ans += X;
                }
            }
            else
                ans += X * abs(N - M);
        }

        else
            ans = X * (N + M - 2);

        cout << ans << ed;
    }

    return 0;
}