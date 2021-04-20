// Problem link : https://codeforces.com/contest/1511/problem/C

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

    int n, q, temp;
    cin>>n>>q;

    map<int, int> mp;

    for(int i=1; i<=n; i++)
    {
        cin>>temp;

        if(mp[temp]<1)
        mp[temp] = i;
    }

    for(int i=0; i<q; i++)
    {
        cin>>temp;

        cout<<mp[temp]<<" ";

        for(auto it=mp.begin(); it!=mp.end(); it++)
        {
            if(it->second < mp[temp])
            it->second++;
        }

        mp[temp] = 1;
    }

    return 0;
}