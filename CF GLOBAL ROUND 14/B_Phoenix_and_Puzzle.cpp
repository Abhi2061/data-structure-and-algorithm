// Problem link : https://codeforces.com/contest/1515/problem/B


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
        bool f = false;
        ll n, x = 2, y = 4;
        cin>>n;

        if(n%x == 0)
        {
            ll area, side;

            area = n/x;
            side = sqrt(area);

            if(side*side == area)
            f = true;

            else if(n%y == 0)
            {
                area = n/y;
                side = sqrt(area);

                if(side*side == area)
                f = true;
            }
        }

        if(f)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}