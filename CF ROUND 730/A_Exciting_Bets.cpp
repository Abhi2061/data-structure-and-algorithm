// Problem link : https://codeforces.com/contest/1543/problem/0


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
        ll a, b, excite = 0, moves = 0;
        cin >> a >> b;

        if (a != b)
        {
            if (a > b)
            {
                ll temp = a;
                a = b;
                b = temp;
            }

            excite = abs(a - b);

            if(a%excite)
            moves += min(a%excite, (excite - a % excite));
        }

        cout << excite << " " << moves << ed;
    }
    return 0;
}