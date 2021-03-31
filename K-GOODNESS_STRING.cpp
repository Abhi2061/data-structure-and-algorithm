#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;

    for(int C=1; C<=T; C++)
    {
        int N, K, cnt = 0;
        cin>>N>>K;

        string S;
        cin>>S;

        for(int i=0; i<N/2; i++)
        {
            if(S[i] != S[N-i-1])
            cnt++;
        }

        cout<<"Case #"<<C<<": "<<abs(K-cnt)<<"\n";
    }
}