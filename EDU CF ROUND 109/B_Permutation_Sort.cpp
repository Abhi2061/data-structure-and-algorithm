// Problem link : https://codeforces.com/contest/1525/problem/B


#include <bits/stdc++.h>
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
        bool f = true;
        int n, min_pos, max_pos, ans = 0;
        cin>>n;

        vector<int> A(n);

        for(int &it : A)
        cin>>it;

        for(int i=1; i<n; i++)
        {
            if(A[i]<A[i-1])
            {
                f = false;
                break;
            }
        }

        if(!f)
        {
            for(int i=0; i<n; i++)
            {
                if(A[i] == 1)
                min_pos = i;

                if(A[i] == n)
                max_pos = i;
            }

            if(min_pos == 0 || max_pos == n-1)
            ans = 1;
            else if(min_pos == n-1 && max_pos == 0)
            ans = 3;
            else
            ans = 2;
        }

        cout<<ans<<"\n";
    }
    return 0;
}