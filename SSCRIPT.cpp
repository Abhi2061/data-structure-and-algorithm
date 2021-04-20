// Problem link : https://www.codechef.com/APRIL21C/problems/SSCRIPT

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
        int N, K, cnt = 0, max = 0;
        string S;

        cin>>N>>K;
        cin>>S;

        for(char it : S)
        {
            if(it == '*')
            cnt++;
            else
            cnt = 0;

            if(cnt > max)
            max = cnt;
        }

        if(max >= K)
        cout<<"YES\n";
        else
        cout<<"NO\n";
        
    }
    return 0;
}