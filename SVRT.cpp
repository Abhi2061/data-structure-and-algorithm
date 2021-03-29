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
        int N, K, D, X;
        cin>>N>>K;

        D = N/K;

        if(N%K)
        {
            D++;

            X = N - ((N/K)*K);
        }
        else
        X = K;

        cout<<D<<" "<<X<<"\n";
    }
    return 0;
}