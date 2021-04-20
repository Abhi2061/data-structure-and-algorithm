// Problem link : https://codeforces.com/contest/1511/problem/A

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
        int n, temp;
        cin>>n;

        int server1 = 0, server2 = 0;

        for(int i=0; i<n; i++)
        {
            cin>>temp;

            if(temp == 1)
            server2++;
            else if(temp == 3)
            server1++;
        }

        cout<<server1+server2<<"\n";
    }
    return 0;
}