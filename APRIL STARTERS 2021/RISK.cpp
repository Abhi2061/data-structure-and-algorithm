// Problem link : https://www.codechef.com/START3B/problems/RISK

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int count(int i, int j, int x, int y, vector<string> &G)
{
    int cnt = 0;

    if(G[i][j] == '1')
    {
        cnt++;
        G[i][j] = '0';

        if(i+1 < x)
        cnt += count(i+1, j, x, y, G);

        if(i-1 >= 0)
        cnt += count(i-1, j, x, y, G);

        if(j+1 < y)
        cnt += count(i, j+1, x, y, G);
        
        if(j-1 >= 0)
        cnt += count(i, j-1, x, y, G);
    }

    return cnt;
}
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
        int x, y, cnt = 0;
        cin>>x>>y;

        vector<string> Gd(x);
        vector<int> c_list;

        for(int i=0; i<x; i++)
        {
            cin>>Gd[i];
        }

        for(int i=0; i<x; i++)
        {
            for(int j=0; j<y; j++)
            {
                if(Gd[i][j] == '1')
                c_list.push_back(count(i,j,x,y,Gd));
            }
        }

        sort(c_list.begin(), c_list.end(), greater<int>());

        for(int i=1; i<c_list.size(); i+=2)
        cnt += c_list[i];

        cout<<cnt<<"\n";
    }
    return 0;
}