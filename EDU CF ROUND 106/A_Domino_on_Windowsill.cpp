// Problem link : https://codeforces.com/contest/1499/problem/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;

    while(T--)
    {
        int n, k1, k2, w, b, w_p = 0, b_p = 0;
        cin>>n>>k1>>k2;
        cin>>w>>b;

        w_p += min(k1,k2);
        w_p += (abs(k1-k2)/2);

        b_p += min(n-k1, n-k2);
        b_p += (abs(n-k1-n+k2)/2);

        if(w_p >= w && b_p >= b)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }

    return 0;
}
