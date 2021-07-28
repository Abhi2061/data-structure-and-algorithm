// Problem link : https://codeforces.com/contest/1553/problem/A


#include <bits/stdc++.h>
#define ed "\n"
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
        int n;
        cin>>n;

        int ans = n/10;

        if(n%10 == 9)
        ans++;

        cout<<ans<<ed;
    }
    return 0;
}