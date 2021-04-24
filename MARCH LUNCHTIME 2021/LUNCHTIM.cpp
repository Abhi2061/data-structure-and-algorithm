//Problem link : https://www.codechef.com/LTIME94B/problems/LUNCHTIM

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
        int N, cnt;
        cin>>N;

        vector<int> H(N), ans(N,-1);

        for(int &it : H)
        cin>>it;

        for(int i=0; i<N; i++)
        {
            if(ans[i] >= 0)
            continue;

            cnt = 0;
            set<int> S;
            S.insert(i);

            for(int j=i-1; j>=0; j--)
            {
                if(H[j] == H[i])
                {
                    cnt++;
                    S.insert(j);
                }
                else if(H[j] > H[i])
                break;
            }

            for(int j = i+1; j<N; j++)
            {
                if(H[j] == H[i])
                {
                    cnt++;
                    S.insert(j);
                }
                else if(H[j] > H[i])
                break;
            }

            for(int it : S)
            ans[it] = cnt;
        }

        for(int it : ans)
        cout<<it<<" ";

        cout<<endl;
    }
    return 0;
}