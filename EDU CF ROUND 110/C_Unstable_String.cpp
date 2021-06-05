// Problem link : https://codeforces.com/contest/1535/problem/C


#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin>>T;

    while(T--)
    {
        string S;
        cin>>S;

        ll n = S.length(), max0 = 0, max1 = 0, ans = 0;

        for(int i=0; i<n; i++)
        {
            if(S[i] == '0')
            {
                max0++;
                max1 = 0;
                ans += max0;
            }
            else if(S[i] == '1')
            {
                max1++;
                max0 = 0;
                ans += max1;
            }
            else
            {
                max0++;
                max1++;
                ans += max(max0, max1);
            }

            swap(max0, max1);
        }

        cout<<ans<<"\n";
    }
    return 0;
}