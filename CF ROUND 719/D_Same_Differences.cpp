// Problem link : https://codeforces.com/contest/1520/problem/D


#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin>>T;

    while(T--)
    {
        ll cnt = 0, n, temp;
        cin>>n;

        map<ll,ll> mp;

        for(ll i=0; i<n; i++)
        {
            cin>>temp;
            mp[temp-i]++;
        }

        for(auto it : mp)
        {
            temp = it.second;
            cnt += (temp*(temp-1))/2;
        }

        cout<<cnt<<"\n";
    }
    return 0;
}