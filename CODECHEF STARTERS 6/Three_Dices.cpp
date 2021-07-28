// Problem link : https://www.codechef.com/START6B/problems/THREDICE


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
        int x, y;
        cin>>x>>y;

        double p = 6 - (x+y);

        if(p < 0)
        p = 0;

        p /= 6;

        cout<<setprecision(7)<<p<<ed;       
    }
    return 0;
}