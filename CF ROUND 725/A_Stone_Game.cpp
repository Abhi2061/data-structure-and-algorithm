// Problem link : https://codeforces.com/contest/1538/problem/A


#include <bits/stdc++.h>
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
        int n, a, cnt = 101, pos1, pos2, min_p, max_p;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin>>a;

            if (a == 1)
                pos1 = i + 1;

            else if (a == n)
                pos2 = i + 1;
        }

        min_p = min(pos1, pos2);
        max_p = max(pos1, pos2);

        cnt = min(cnt, max_p);
        cnt = min(cnt, n - min_p + 1);
        cnt = min(cnt, min_p + n - max_p + 1);
        
        cout << cnt << "\n";
    }
    return 0;
}