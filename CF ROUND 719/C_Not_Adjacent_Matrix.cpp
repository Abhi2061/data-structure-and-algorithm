// Problem link : https://codeforces.com/contest/1520/problem/C

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
        int n;
        cin>>n;

        if(n == 2)
        cout<<-1<<"\n";

        else
        {
            int mat[n][n];

            int i=1, r1 = 1, c1 = 0, r2 = 0, c2 = 1;
            bool f = true;

            while(i<=n)
            {
                mat[i-1][i-1] = i;
                i++;
            }

            while(i<=(n*n))
            {
                if(f)
                {
                    mat[r1][c1] = i;
                    r1++;

                    if(r1 == n)
                    {
                        c1++;
                        r1 = c1+1;
                    }
                }
                else
                {
                    mat[r2][c2] = i;
                    c2++;

                    if(c2 == n)
                    {
                        r2++;
                        c2 = r2+1;
                    }
                }

                f = !f;
                i++;
            }

            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                cout<<mat[i][j]<<" ";

                cout<<"\n";
            }
        }
    }
    return 0;
}