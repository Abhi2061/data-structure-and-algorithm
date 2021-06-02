// Problem link : https://www.codechef.com/START4C/problems/LAZYCHF


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
        int x, m, d, delay;
        cin>>x>>m>>d;

        delay = min((m-1)*x, d);

        cout<<x+delay<<"\n";
    }
    return 0;
}