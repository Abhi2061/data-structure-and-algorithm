// Problem link : https://www.codechef.com/JUNE21B/problems/CHFHEIST


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
        ll D, d, P, Q, ans, n, a, l;
        cin>>D>>d>>P>>Q;

        n = D/d;
        a = P*d;
        l = a + (n-1)*(Q*d);

        ans = (n*(a+l))/2;

        l = P + n*Q;

        ans += (D%d)*l;         

        cout<<ans<<"\n";
    }
    return 0;
}