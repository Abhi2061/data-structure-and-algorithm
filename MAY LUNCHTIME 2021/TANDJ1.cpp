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
        int a, b, c, d, K, M = 0;
        cin>>a>>b>>c>>d>>K;

        M = abs(c-a) + abs(d-b);

        if(K < M || (K-M)%2)
        cout<<"NO\n";
        else
        cout<<"YES\n"; 
    }
    return 0;
}