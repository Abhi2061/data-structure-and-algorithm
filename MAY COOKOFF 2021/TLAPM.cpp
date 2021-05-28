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
        ll x = 1, y = 1, x1, y1, x2, y2, total = 1, next, val;
        cin>>x1>>y1>>x2>>y2;

        for(int i=1; i<x1; i++)
        total += (i+1);

        for(int i=1; i<y1; i++)
        total += (x1+i-1);

        next = x1+y1;
        val = total;

        for(int i=x1; i<x2; i++)
        {
            val += next;
            total += val;           
            next++;
        } 
        
        next = x2+y1-1;

        for(int i=y1; i<y2; i++)
        {
            val += next;
            total += val;
            next++;
        }

        cout<<total<<"\n";
    }
    return 0;
}