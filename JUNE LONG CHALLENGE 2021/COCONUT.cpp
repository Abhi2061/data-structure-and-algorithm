// Problem link : https://www.codechef.com/JUNE21B/problems/COCONUT


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
        int a, b, X, Y;
        cin>>a>>b>>X>>Y;

        cout<<X/a + Y/b<<"\n";
    }
    return 0;
}