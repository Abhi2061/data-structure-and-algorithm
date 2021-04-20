// Problem link : https://www.codechef.com/APRIL21C/problems/SDICE

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
        ll N, total = 0;
        cin>>N;

        total += 44*(N/4);
        N %= 4;

        if(N == 1)
        {
            if(total == 0)
            total += 20;
            else
            total += 32;
        }
        else if(N == 2)
        {
            if(total == 0)
            total += 36;
            else
            total += 44;
        }
        else if(N == 3)
        {
            if(total == 0)
            total += 51;
            else
            total += 55;
        }
        else
        total += 16;

        cout<<total<<"\n";
    }
    return 0;
}