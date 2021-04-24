// Problem link : https://codeforces.com/contest/1499/problem/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        string S;
        cin >> S;

        char pre = '\0';
        bool f = false, ans = true;

        for (char it : S)
        {
            if (it == pre)
            {
                if (it == '0')
                {
                    if (f)
                    {
                        ans = false;
                        break;
                    }
                }
                else
                    f = true;
            }
            else
                pre = it;
        }

        if (ans)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
