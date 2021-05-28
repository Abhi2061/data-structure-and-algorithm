// Problem link : https://www.codechef.com/MAY21C/problems/XOREQUAL


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

    ll mod = pow(10,9) + 7;
    int T;  
    cin>>T;

    while(T--)
    {
        bool f = true;
        ll N, ans = 0, max_int = pow(2,31);
        cin>>N;

        N--;

        if(N<31)
        {
            ans = pow(2,N);
            ans %= mod;
            N = 0;
        }

        while(N >= 31)
        {
            ans += max_int;
            N -= 31;
            ans %= mod;
        }

        if(N > 0)
        {
            ans += pow(2,N);
            ans %= mod;
        }  

        cout<<ans<<"\n";
    }
    return 0;
}