// Problem link : https://codeforces.com/contest/1519/problem/A

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
        ll r, b, d;
        cin>>r>>b>>d;

        if(min(r,b)*d < abs(r-b))
        cout<<"NO\n";
        else
        cout<<"YES\n";
    }
    return 0;
}