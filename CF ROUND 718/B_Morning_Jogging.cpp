// Problem link : https://codeforces.com/contest/1517/problem/B

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin>>T;

    while(T--)
    {
        int n, m, temp;
        cin>>n>>m;

        int A[n][m];
        memset(A, -1, sizeof A);

        multiset<pair<int,int>> mul;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>temp;
                mul.insert({temp,i});
            }
        }

        auto it = mul.begin();

        for(int i=0; i<m; i++)
        {           
            A[it->second][i] = it->first;
            it++;
        }

        while(it != mul.end())
        {
            int i = it->second;

            for(int j=0; j<m; j++)
            {
                if(A[i][j] == -1)
                {
                    A[i][j] = it->first;
                    break;
                }
            }

            it++;
        }

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            cout<<A[i][j]<<" ";

            cout<<"\n";
        }
    }
    return 0;
}
