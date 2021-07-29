// Problem link : https://www.codechef.com/COOK131B/problems/XORORED

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
        int N;
        cin >> N;

        vector<ll> A(N);

        for (ll &it : A)
            cin >> it;

        ll Min = LONG_MAX, X;

        for (ll it : A)
        {
            ll x = 0;

            for (ll it1 : A)
                x |= (it ^ it1);

            if (x < Min)
            {
                Min = x;
                X = it;
            }
        }

        cout << X << " " << Min << ed;
    }
    return 0;
}