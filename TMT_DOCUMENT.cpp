//Problem link : https://codeforces.com/contest/1509/problem/B

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
        int n, cnt = 0;
        bool flag = true;
        cin>>n;

        string S;
        cin>>S;

        for(char it : S)
        {
            if(it == 'T')
            cnt++;
            else
            cnt--;

            if(cnt < 0)
            flag = false;
        }

        if(n%3 || cnt != n/3)
        flag = false;

        cnt = 0;

        for(auto it=S.rbegin(); it!=S.rend(); it++)
        {
            if(*it == 'T')
            cnt++;
            else
            cnt--;

            if(cnt < 0)
            flag = false;
        }

        if(n%3 || cnt != n/3)
        flag = false;

        if(flag)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}
