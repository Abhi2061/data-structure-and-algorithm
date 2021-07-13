// Problem link : https://codeforces.com/contest/1547/problem/B


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
        string S;
        cin >> S;

        bool f = true;
        int p = 0, l, r, n = S.length(), i = 1;

        while (p < n and S[p] != 'a')
            p++;

        if(p >= n)
        f = false;
        
        l = p-1;
        r = p+1;

        while(l>=0 or r<n)
        {
            if(l >= 0 and S[l] == 'a'+i)
            {
                l--;
                i++;
            }
            else if(r < n and S[r] == 'a'+i)
            {
                r++;
                i++;
            }
            else
            {
                f = false;
                break;
            }
        }

        if (f)
            cout << "YES" << ed;
        else
            cout << "NO" << ed;
    }
    return 0;
}