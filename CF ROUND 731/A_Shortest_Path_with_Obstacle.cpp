// Problem link : https://codeforces.com/contest/1547/problem/A


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
        int x1, x2, x3, y1, y2, y3, ans;
        cin >> x1 >> y1;
        cin >> x2 >> y2;
        cin >> x3 >> y3;

        if(x2 < x1)
        {
            int temp = x1;
            x1 = x2;
            x2 = temp;
        }

        if(y2 < y1)
        {
            int temp = y1;
            y1 = y2;
            y2 = temp;
        }

        ans = abs(x1 - x2) + abs(y1 - y2);

        if ((x1 == x2 and x1 == x3 and y3 > y1 and y3 < y2) or (y1 == y2 and y1 == y3 and x3 > x1 and x3 < x2))
            ans += 2;

        cout << ans << ed;
    }
    return 0;
}