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
        int N, M, cnt = 0, i = 0, j = 0, ptr = 1;
        cin>>N>>M;

        vector<int> F(N), C(M);

        for(int &it : F)
        cin>>it;

        for(int &it : C)
        cin>>it;

        while(i < N && j < M)
        {
            if(F[i] < C[j])
            {
                if(ptr == 1)
                i++;
                else
                {
                    i++;
                    ptr = 1;
                    cnt++;
                }
            }
            else
            {
                if(ptr == 2)
                j++;
                else
                {
                    j++;
                    ptr = 2;
                    cnt++;
                }
            }
        }

        if(i < N)
        {
            if(ptr == 2)
            cnt++;
        }
        else if(j < M)
        {
            if(ptr == 1)
            cnt++;
        }

        cout<<cnt<<endl;
    }
    return 0;
}