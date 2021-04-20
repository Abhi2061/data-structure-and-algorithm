// Problem link : https://codeforces.com/contest/1511/problem/B

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int dig(ll n)
{
    int cnt = 0;

    while(n)
    {
        n /= 10;
        cnt++;
    }

    return cnt;
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

    vector<ll> pr;

    pr.push_back(2);
    pr.push_back(11);
    pr.push_back(101);
    pr.push_back(1009);
    pr.push_back(10007);
    pr.push_back(100003);
    pr.push_back(1000003);
    pr.push_back(10000019);
    pr.push_back(100030001);

    while(T--)
    {
        int A, B, C;
        cin>>A>>B>>C;

        ll X, Y, Z;

        Z = pr[C-1];

        X = 2*Z;

        while(dig(X) <  A)
        {
            X *= 2;
        }

        Y = 3*Z;

        while(dig(Y) < B)
        {
            Y *= 3;
        }

        cout<<X<<" "<<Y<<"\n";
    }
    return 0;
}