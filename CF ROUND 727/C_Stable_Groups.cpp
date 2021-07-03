// Problem link : https://codeforces.com/contest/1539/problem/C


#include <bits/stdc++.h>
#define ed "\n"
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k, x, d, cnt;
    cin >> n >> k >> x;

    vector<ll> A(n), diff;

    for (ll &it : A)
        cin >> it;

    sort(A.begin(), A.end());

    for (int i = 1; i < n; i++)
    {
        if (A[i] - A[i - 1] > x)
            diff.push_back(A[i] - A[i - 1] - 1);
    }

    cnt = diff.size() + 1;
    sort(diff.begin(), diff.end());

    for (ll it : diff)
    {
        d = it / x;

        if (d <= k)
        {
            cnt--;
            k -= d;
        }
        else
            break;
    }

    cout << cnt << ed;

    return 0;
}