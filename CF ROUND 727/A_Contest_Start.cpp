// Problem link : https://codeforces.com/contest/1539/problem/A


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
        ll sum = 0;
        ll n, x, t;
        cin >> n >> x >> t;

        sum = max((ll)0, n - t / x) * (t / x);

        sum += (min(n - 1, t / x - 1) * min(n, t / x)) / 2;

        cout << sum << ed;
    }
    return 0;
}