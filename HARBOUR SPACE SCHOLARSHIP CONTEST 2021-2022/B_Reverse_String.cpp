// Problem link : https://codeforces.com/contest/1553/problem/B


#include <bits/stdc++.h>
#define ed "\n"
using namespace std;
using ll = long long;

int N, M;

bool check(string s, string t, int i, int j, bool left)
{
    if (j == M)
        return true;

    if (i >= N or i < 0)
        return false;

    if (s[i] != t[j])
        return false;

    bool ans1, ans2;

    ans1 = check(s, t, i - 1, j + 1, true);

    if (!left)
        ans2 = check(s, t, i + 1, j + 1, false);
    else
        ans2 = false;

    return ans1 or ans2;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--)
    {
        string s, t;
        cin >> s >> t;

        N = s.length();
        M = t.length();

        int i = 0;
        bool ans = false;

        while (i < N and !ans)
        {
            if (s[i] == t[0])
            {
                if (check(s, t, i, 0, false))
                    ans = true;
            }

            i++;
        }

        if (ans)
            cout << "YES" << ed;
        else
            cout << "NO" << ed;
    }
    return 0;
}