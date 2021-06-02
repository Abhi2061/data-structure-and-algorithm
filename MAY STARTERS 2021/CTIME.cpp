// Problem link : https://www.codechef.com/START4C/problems/CTIME


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
        int N, K, F, S, E, sum = 0;
        cin>>N>>K>>F;

        vector<vector<int>> inv(N, vector<int>());

        for(int i=0; i<N; i++)
        {
            cin>>S>>E;
            inv[i] = {S,E};;
        }

        sort(inv.begin(), inv.end());

        S = 0;

        for(auto it : inv)
        {
            if(S < it[0])
            sum += it[0]-S;
            
            if(S < it[1])
            S = it[1];
        }

        sum += F-S;

        if(sum >= K)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}