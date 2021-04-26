// Problem link : https://www.codechef.com/START3B/problems/HIRETEST

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
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int T;
    cin>>T;

    while(T--)
    {
        string ans;
        int N, M, X, Y;
        cin>>N>>M>>X>>Y;

        for(int i=0; i<N; i++)
        {
            string S;
            cin>>S;

            int P = 0, F = 0;

            for(char it : S)
            {
                if(it == 'F')
                F++;
                if(it == 'P')
                P++;
            }

            if(F >= X)
            ans.push_back('1');
            else if(F == (X-1) && P >= Y)
            ans.push_back('1');
            else
            ans.push_back('0');
        }

        cout<<ans<<"\n";
    }
    return 0;
}