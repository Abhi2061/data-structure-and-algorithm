// Problem link : https://codeforces.com/contest/1537/problem/C


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
        int n, pos, md = INT_MAX;
        cin>>n;

        vector<int> A(n), diff;

        for(int &it : A)
        cin>>it;

        sort(A.begin(), A.end());

        if(n == 2)
        {
            cout<<A[0]<<" "<<A[1]<<endl;
            continue;
        }

        for(int i=1; i<n; i++)
        {
            if(md > abs(A[i]-A[i-1]))
            {
                md = abs(A[i]-A[i-1]);
                pos = i;
            }
        }

        for(int i=pos; i<n; i++)
        cout<<A[i]<<" ";

        for(int i=0; i<pos; i++)
        cout<<A[i]<<" ";

        cout<<endl;
    }
    return 0;
}