// Problem link : https://www.codechef.com/COOK128C/problems/CM164364

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
        int n, x, flavour, ans;
        cin>>n>>x;

        map<int, int> mp;

        for(int i=0; i<n; i++)
        {
            cin>>flavour;

            mp[flavour]++;
        }

        for(auto it=mp.begin(); it!=mp.end(); it++)
        {
            if(it->second > 1)
            x -= (it->second-1);
            it->second = 1;

            if(x <= 0)
            break;
        }

        ans = mp.size();

        if(x > 0)
        {
            ans -= x;

            if(ans < 0)
            ans = 0;
        }

        cout<<ans<<"\n";
    }
    return 0;
}