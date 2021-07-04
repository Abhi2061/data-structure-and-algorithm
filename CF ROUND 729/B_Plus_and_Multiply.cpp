// Problem link : https://codeforces.com/contest/1542/problem/B


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
        ll n, a, b, s = 1;
        cin >> n >> a >> b;

        bool f = false;

        if (a == 1)
        {
            if ((n - 1) % b == 0)
                cout << "Yes" << ed;
            else
                cout << "No" << ed;

            continue;
        }
        while (s <= n)
        {
            if ((n - s) % b == 0)
            {
                f = true;
                break;
            }

            s *= a;
        }

        if (f)
            cout << "Yes" << ed;
        else
            cout << "No" << ed;
    }
    return 0;
}