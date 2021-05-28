// Problem link : https://www.codechef.com/MAY21C/problems/LKDNGOLF


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
        int N, x, k;
        cin>>N>>x>>k;

        if(x%k == 0 || x%k == (N+1)%k)
        cout<<"YES\n";

        else
        cout<<"NO\n";
    }
    return 0;
}