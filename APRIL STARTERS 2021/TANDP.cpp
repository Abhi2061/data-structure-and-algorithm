// Problem link : https://www.codechef.com/START3B/problems/TANDP

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
        int N, M, x, y, a, b, P1 = 0, P2 = 0, t;
        cin>>N>>M;
        cin>>x>>y;
        cin>>a>>b;

        P1 = (N-x) + (M-y);
        
        t = min(N-a, M-b);
        a += t;
        b += t;

        if(a == N)
        P2 = t + M-b;
        else
        P2 = t + N-a;

        if(P1 <= P2)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}