//Problem link : https://codeforces.com/contest/1512/problem/B

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
        int n, i1 = -1, i2, i3, i4, j1, j2, j3, j4;
        cin>>n;

        char A[n][n];
        
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin>>A[i][j];

                if(A[i][j] == '*')
                {
                    if(i1 != -1)
                    {
                        i2 = i;
                        j2 = j;
                    }
                    else
                    {
                        i1 = i;
                        j1 = j;
                    }
                }
            }
        }

        if(i1 == i2)
        {
            if(i1 != 0)
            i3 = i4 = 0;
            else
            i3 = i4 = n-1;

            j3 = j1;
            j4 = j2;
        }
        else if(j1 == j2)
        {
            if(j1 != 0)
            j3 = j4 = 0;
            else
            j3 = j4 = n-1;

            i3 = i1;
            i4 = i2;
        }
        else
        {
            i3 = i1;
            j3 = j2;
            
            i4 = i2;
            j4 = j1;
        }

        A[i3][j3] = '*';
        A[i4][j4] = '*';

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            cout<<A[i][j];

            cout<<"\n";
        }
    }
    return 0;
}
