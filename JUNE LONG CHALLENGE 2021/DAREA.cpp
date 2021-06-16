// Problem link : https://www.codechef.com/JUNE21B/problems/DAREA


#include <bits/stdc++.h>
#define ed "\n"
using namespace std;
using ll = long long;

ll solve(vector<pair<ll, ll>> v, ll n)
{
    ll ans = LLONG_MAX;
    vector<ll> preMax(n), preMin(n), sufMax(n), sufMin(n);

    preMax[0] = preMin[0] = v[0].second;
    sufMax[n - 1] = sufMin[n - 1] = v[n - 1].second;

    for (int i = 1; i < n; i++)
    {
        preMax[i] = max(preMax[i - 1], v[i].second);
        preMin[i] = min(preMin[i - 1], v[i].second);
    }

    for (int i = n - 2; i >= 0; i--)
    {
        sufMax[i] = max(sufMax[i + 1], v[i].second);
        sufMin[i] = min(sufMin[i + 1], v[i].second);
    }

    for (int i = 0; i < n - 1; i++)
    {
        ll rec1l = preMax[i] - preMin[i];
        ll rec1b = v[i].first - v[0].first;
        ll rec2l = sufMax[i + 1] - sufMin[i + 1];
        ll rec2b = v[n - 1].first - v[i+1].first;

        ans = min(ans, (rec1l * rec1b) + (rec2l * rec2b));
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
        ll n, x, y, ans1, ans2;
        cin >> n;

        vector<pair<ll, ll>> cord1, cord2;

        for (int i = 0; i < n; i++)
        {
            cin >> x >> y;

            cord1.push_back({x, y});
            cord2.push_back({y, x});
        }

        if(n <= 2)
        {
            cout<<0<<ed;
            continue;
        }

        sort(cord1.begin(), cord1.end());
        sort(cord2.begin(), cord2.end());

        ans1 = solve(cord1, n);
        ans2 = solve(cord2, n);

        cout << min(ans1, ans2) << ed;
    }
    return 0;
}