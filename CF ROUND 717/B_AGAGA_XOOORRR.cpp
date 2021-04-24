#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int T;
    cin >> T;

    while (T--)
    {
        int n, t_x, i, j;
        bool f, ff = false;
        cin >> n;

        vector<int> A(n), dp(n + 1);

        for (int &it : A)
            cin >> it;

        dp[0] = 0;

        for (i = 0; i < n; i++)
            dp[i + 1] = dp[i] ^ A[i];

        for (i = 1; i < n; i++)
        {
            j = i;
            t_x = 0;
            f = false;

            while(j < n)
            {
                t_x ^= A[j];
                
                if(t_x == dp[i])
                {
                    t_x = 0;
                    f = true;
                }
                
                j++;
            }

            if(t_x == 0 && f)
            {
                cout<<"YES\n";
                ff = true;
                break;
            }
        }

        if(!ff)
        cout<<"NO\n";
    }
    return 0;
}