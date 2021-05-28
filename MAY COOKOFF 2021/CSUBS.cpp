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
        int N, K, cnt = 0;
        cin>>N>>K;

        vector<int> A(N);

        for(int &it : A)
        cin>>it;

        for(int i=0; i<K; i++)
        {
            map<int,int> mp;
            int max = 0, val;

            for(int j=i; j<N; j+=K)
            mp[A[j]]++;

            for(auto it : mp)
            {
                if(it.second > max)
                {
                    max = it.second;
                    val = it.first;
                }
            }

            for(int j=i; j<N; j+=K)
            {
                if(A[j] != val)
                {
                    cnt++;
                    A[j] = val;
                }
            }
        }

        cout<<cnt<<"\n";
    }
    return 0;
}