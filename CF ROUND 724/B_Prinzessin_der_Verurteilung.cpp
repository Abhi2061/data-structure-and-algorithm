// Problem link : https://codeforces.com/contest/1536/problem/B


#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void inc(string &S)
{
    int i;

    for (i = S.length() - 1; i >= 0; i--)
    {
        if (S[i] < 'z')
        {
            S[i]++;
            break;
        }
        else
            S[i] = 'a';
    }

    if (i < 0)
        S.push_back('a');
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--)
    {
        bool f = true;
        int n;
        cin >> n;

        string S, s = "";
        cin >> S;

        while (f)
        {
            inc(s);
            f = false;
            int l = s.length();

            for (int i = 0; i <= n - l; i++)
            {
                if (S.compare(i, l, s) == 0)
                {
                    f = true;
                    break;
                }
            }
        }

        cout<<s<<"\n";
    }
    return 0;
}