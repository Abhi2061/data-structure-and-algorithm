// Problem link : https://codeforces.com/contest/1543/problem/B


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
        ll sum = 0, n;
        cin >> n;

        vector<ll> A(n);

        for (ll &it : A)
        {
            cin >> it;
            sum += it;
        }

        sum %= n;

        cout << (n - sum) * sum << ed;
    }
    return 0;
}