//Problem link : https://www.codechef.com/LTIME94B/problems/DATE1

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
        ll A, Y, X, ans = 0;
        cin>>A>>Y>>X;

        if(Y>A)
        ans = X*A + 1;
        else
        ans = Y*X;

        cout<<ans<<endl;
    }

    return 0;
}