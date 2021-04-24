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
        bool f = true;
        int a, b, x = 0, y = 0, z = 0, l, mid;
        string S;

        cin >> a >> b;

        cin >> S;

        l = S.size();
        mid = l / 2;

        if (l % 2)
            mid++;

        for (int i = 0; i < l / 2; i++)
        {
            if (S[i] != S[l - i - 1])
            {
                if (S[i] == '?')
                    S[i] = S[l - i - 1];
                else if (S[l - i - 1] == '?')
                    S[l - i - 1] = S[i];
                else
                    f = false;
            }
        }

        for (char it : S)
        {
            if (it == '0')
                x++;
            else if (it == '1')
                y++;
            else
                z++;
        }

        if (x > a || y > b)
            f = false;

        for (int i = 0; i < mid; i++)
        {
            if (S[i] == '?')
            {
                if (i == (l - i - 1))
                {
                    if (x == (a - 1))
                    {
                        S[i] = '0';
                        x++;
                    }
                    else if (y == (b - 1))
                    {
                        S[i] = '1';
                        y++;
                    }

                    z--;
                }
                else
                {
                    if (x <= (a - 2))
                    {
                        S[i] = S[l - i - 1] = '0';
                        x += 2;
                    }
                    else if (y <= (b - 2))
                    {
                        S[i] = S[l - i - 1] = '1';
                        y += 2;
                    }

                    z -= 2;
                }
            }
        }

        if (x != a || y != b || z != 0)
            f = false;

        if (!f)
            cout << -1 << "\n";
        else
            cout << S << "\n";
    }
    return 0;
}