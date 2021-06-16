// Problem link : https://codeforces.com/contest/1538/problem/C


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
        ll n, l, r, total = 0;
        cin>>n>>l>>r;

        vector<int> A(n);

        for(int &it : A)
        cin>>it;

        sort(A.begin(), A.end());

        for(int i=0; i<n-1; i++)
        {
            int mx = r-A[i], mn = l-A[i];

            auto mnp = lower_bound(A.begin()+i+1, A.end(), mn);
            auto mxp = upper_bound(A.begin()+i+1, A.end(), mx);

            total += (mxp - mnp);
        }

        cout<<total<<ed;
    }
    return 0;
}