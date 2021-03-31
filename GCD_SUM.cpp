// Problem link : https://codeforces.com/contest/1498/problem/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll sum_digit(ll n)
{
    ll sum = 0;

    while(n)
    {
        sum += (n%10);
        n /= 10;
    }

    return sum;
}

ll GCD(ll n1, ll n2)
{
    if(n1>=n2)
    {
        if(n1%n2 == 0)
        return n2;
        else
        return GCD(n2, n1%n2);
    }
    else
    {
        if(n2%n1 == 0)
        return n1;
        else
        return GCD(n1, n2%n1);
    }
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
        ll n, sum;
        cin>>n;

        sum = sum_digit(n);

        while(GCD(n,sum)<=1)
        {
            n++;
            sum = sum_digit(n);
        }

        cout<<n<<"\n";
    }
    return 0;
}