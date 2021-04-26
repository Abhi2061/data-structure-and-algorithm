//Problem link : https://www.codechef.com/START2C/problems/NOBEL

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
        int N, M, temp;
        bool f = false;

        cin>>N>>M;

        vector<int> R(M+1, 0);

        for(int i=0; i<N; i++)
        {
            cin>>temp;
            R[temp]++;
        }

        for(int i=1; i<=M; i++)
        {
            if(R[i] == 0)
            {
                f = true;
                break;
            }
        }

        if(f)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    
    return 0;
}