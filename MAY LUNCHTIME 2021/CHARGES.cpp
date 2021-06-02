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
        ll dist = 0;
        int N, K, Q;
        cin>>N>>K;

        string S;
        cin>>S;

        for(int i=1; i<N; i++)
        {
            if(S[i] == S[i-1])
            dist += 2;
            else
            dist ++;
        }

        if(N == 1)
        {
            while(K--)
            cout<<dist<<"\n";

            continue;
        }

        while(K--)
        {
            cin>>Q;

            if(S[Q-1] == '1')
            S[Q-1] = '0';
            else
            S[Q-1] = '1';

            if(Q > 1 and Q < N)
            {
                if(S[Q-1] == S[Q-2])
                dist ++;
                else
                dist --;

                if(S[Q-1] == S[Q])
                dist ++;
                else
                dist --;
            }

            else if(Q == 1)
            {
                if(S[0] == S[1])
                dist ++;
                else
                dist --;
            }

            else if(Q == N)
            {
                if(S[N-1] == S[N-2])
                dist ++;
                else
                dist --;
            }

            cout<<dist<<"\n";
        }
    }
    return 0;
}