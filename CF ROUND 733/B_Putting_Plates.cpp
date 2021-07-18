// Problem link : https://codeforces.com/contest/1530/problem/B


#include <bits/stdc++.h>
#define ed "\n"
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin>>T;

    while(T--)
    {
        int h, w;
        cin>>h>>w;

        int G[h][w];

        for(int i=0; i<h; i++)
        {
            for(int j=0; j<w; j++)
            {
                if(i==0 or i == h-1 or j == 0 or j == w-1)
                {
                    if(i == 0)
                    {
                        if(j == 0 or G[i][j-1] == 0)
                        G[i][j] = 1;
                        else
                        G[i][j] = 0;
                    }
                    else if(j == 0)
                    {
                        if(G[i-1][j] == 0)
                        G[i][j] = 1;
                        else
                        G[i][j] = 0;
                    }
                    else if(j == w-1)
                    {
                        if(G[i-1][j] == 0 and G[i-1][j-1] == 0 and G[i][j-1] == 0)
                        G[i][j] = 1;
                        else
                        G[i][j] = 0;
                    }
                    else
                    {
                        if(G[i-1][j] == 0 and G[i-1][j-1] == 0 and G[i][j-1] == 0 and G[i-1][j+1] == 0)
                        G[i][j] = 1;
                        else
                        G[i][j] = 0;
                    }
                }
                else
                G[i][j] = 0;
            }
        }

        for(int i=0; i<h; i++)
        {
            for(int j=0; j<w; j++)
            cout<<G[i][j];

            cout<<ed;
        }

        cout<<ed;
    }
    return 0;
}