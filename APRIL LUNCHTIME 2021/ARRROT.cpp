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

    ll N, sum = 0, temp, Q, mod = 1000000007;
    cin>>N;

    for(ll i=0; i<N; i++)
    {
        cin>>temp;
        sum += temp;
    }

    cin>>Q;

    while(Q--)
    {
        cin>>temp;
        sum *= 2;
        sum = ((sum%mod)+mod)%mod;
        cout<<sum<<"\n";
    }

    return 0;
}