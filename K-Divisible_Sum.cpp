//Problem link : https://codeforces.com/problemset/problem/1476/A

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
        ll n, k, ans;
        cin>>n>>k;
        
        if(n>k)
        {
            if(n%k == 0)
            ans = 1;
            else
            ans = 2;
        }
        else if(n<k)
        {
            ans = k/n;

            if(k%n)
            ans++;
        }
        else
        ans = 1;

        cout<<ans<<endl;
    }
    return 0;
}