// Problem link : https://www.codechef.com/APRIL21C/problems/BOLT

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
        float k1, k2, k3, v, A, t;
        int temp;
        cin>>k1>>k2>>k3>>v;

        A = k1*k2*k3*v;

        t = 100/A;
        t *= 100;
        t += 0.5;
        temp = (int)t;

        if(temp < 958)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }

    return 0;
}