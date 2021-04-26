// Problem link : https://www.codechef.com/START3B/problems/CCISLAND

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
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int T;
    cin>>T;

    while(T--)
    {
        bool f = true;
        int x, y, x_r, y_r, D;

        cin>>x>>y>>x_r>>y_r>>D;

        if(x/x_r < D)
        f = false;

        if(y/y_r < D)
        f = false;

        if(f)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}