// Problem link : https://codeforces.com/contest/1506/problem/D


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
    cin>>T;

    while(T--)
    {
        int n, temp, max_fre = 1, ans;
        cin>>n;

        map<int, int> mp;

        for(int i=0; i<n; i++)
        {
            cin>>temp;
            mp[temp]++;

            max_fre = max(max_fre, mp[temp]);
        }

        ans = (2*max_fre) - n;

        if(ans < 0)
        ans = 0;

        if(ans == 0 and n%2)
        ans = 1;

        cout<<ans<<"\n";
    }
    return 0;
}