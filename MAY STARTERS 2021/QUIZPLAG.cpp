// Problem link : https://www.codechef.com/START4C/problems/QUIZPLAG


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
        int N, M, K, L;
        cin>>N>>M>>K;

        vector<int> hash(N+M+1, 0);
        set<int> disq;

        for(int i=0; i<K; i++)
        {
            cin>>L;
            hash[L]++;
        }

        for(int i=1; i<=N; i++)
        {
            if(hash[i]>1)
            disq.insert(i);
        }

        cout<<disq.size()<<" ";

        for(int it : disq)
        cout<<it<<" ";

        cout<<"\n";
    }
    return 0;
}