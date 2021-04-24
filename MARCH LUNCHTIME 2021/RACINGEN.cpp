//Problem link : https://www.codechef.com/LTIME94B/problems/RACINGEN

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
        ll X, R, M, Q, req = 0;
        cin>>X>>R>>M;

        R *= 60;
        M *= 60;
        
        req = min(X,R);
        R -= min(X,R);

        req += 2*R;

        if(req <= M)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}