// Problem link : https://www.codechef.com/MAY21C/problems/TCTCTOE


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
        bool win_X = false, win_O = false;
        int ans = 2, cnt_O = 0, cnt_X = 0;

        vector<string> g(3), g_t(3);

        for(int i=0; i<3; i++)
        cin>>g[i];

        g_t = g;

        for(int i=0; i<3; i++)
        {
            for(int j=i+1; j<3; j++)
            {
                char temp = g_t[i][j];
                g_t[i][j] = g_t[j][i];
                g_t[j][i] = temp;
            }
        }

        for(auto row : g)
        {
            cnt_O += count(row.begin(), row.end(), 'O');
            cnt_X += count(row.begin(), row.end(), 'X');

            if(count(row.begin(), row.end(), 'O') == 3)
            win_O = true;

            else if(count(row.begin(), row.end(), 'X') == 3)
            win_X = true;
        }

        for(auto col : g_t)
        {
            if(count(col.begin(), col.end(), 'O') == 3)
            win_O = true;

            else if(count(col.begin(), col.end(), 'X') == 3)
            win_X = true;
        }

        if(g[0][0] == g[1][1] and g[1][1] == g[2][2] and g[0][0] == 'X')
        win_X = true;

        else if(g[0][0] == g[1][1] and g[1][1] == g[2][2] and g[0][0] == 'O')
        win_O = true;

        else if(g[0][2] == g[1][1] and g[1][1] == g[2][0] and g[1][1] == 'X')
        win_X = true;

        else if(g[0][2] == g[1][1] and g[1][1] == g[2][0] and g[1][1] == 'O')
        win_O = true;

        int diff = cnt_X - cnt_O;

        if((win_O and win_X) or (win_X and diff != 1) or (win_O and diff != 0) or (diff != 1 and diff != 0))
        ans = 3;

        else if((win_O or win_X) or cnt_X+cnt_O == 9)
        ans = 1;

        cout<<ans<<"\n";
    }
    return 0;
}