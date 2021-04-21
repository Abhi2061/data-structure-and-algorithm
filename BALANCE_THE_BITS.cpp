// Problem link : https://codeforces.com/contest/1504/problem/C

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
        bool f = true, f0 = false;
        int N, cnt0 = 0, cnt1 = 0, open = 0;
        cin >> N;

        string S, A = "", B = "";
        cin >> S;

        for (char it : S)
        {
            if (it == '0')
                cnt0++;
            else
                cnt1++;
        }

        if (cnt0 % 2 || S[0] == '0' || S[N - 1] == '0')
            f = false;

        if (f)
        {
            for (char it : S)
            {
                if (it == '1')
                {
                    if (open < cnt1/2)
                    {
                        A.push_back('(');
                        B.push_back('(');
                        open++;
                    }
                    else
                    {
                        A.push_back(')');
                        B.push_back(')');
                    }
                }
                else
                {
                    if (f0)
                    {
                        A.push_back('(');
                        B.push_back(')');
                    }
                    else
                    {
                        A.push_back(')');
                        B.push_back('(');
                    }

                    f0 = !f0;
                }
            }
        }

        if (f)
        {
            cout << "YES\n";
            cout << A << "\n";
            cout << B << "\n";
        }
        else
            cout << "NO\n";
    }
    return 0;
}