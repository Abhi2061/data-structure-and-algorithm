// Problem link : https://www.codechef.com/COOK128C/problems/PSGRADE

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

    int t;
    cin>>t;

    while(t--)
    {
        int A, B, C, T, a, b, c;
        cin>>A>>B>>C>>T>>a>>b>>c;

        if(a < A || b < B || c < C || (a+b+c) < T)
        cout<<"NO\n";
        else
        cout<<"YES\n"; 
    }
    return 0;
}