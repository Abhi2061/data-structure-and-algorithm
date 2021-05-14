// Problem link : https://codeforces.com/contest/1520/problem/A

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
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    int T;
    cin>>T;

    while(T--)
    {
        bool f = false;
        int n;
        cin>>n;

        string S;
        cin>>S;

        map<char, int> mp;

        mp[S[0]]++;

        for(int i=1; i<n; i++)
        {
            mp[S[i]]++;

            if(mp[S[i]] > 1)
            {
                if(S[i] != S[i-1])
                f = true;
            }
        }

        if(!f)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}