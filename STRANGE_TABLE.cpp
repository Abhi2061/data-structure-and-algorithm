//Problem link : https://codeforces.com/contest/1506/problem/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
    int t;
    cin>>t;

    while(t--)
    {
        long long n, m, x, r, c, ans;
        cin>>n>>m>>x;

        r = (x-1)%n;
        c = (x-1)/n;

        ans = m*r + c + 1;
        cout<<ans<<endl;
    }

    return 0;
}
