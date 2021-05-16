// Problem link : https://codeforces.com/contest/1521/problem/B


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
        int n, min = INT_MAX, min_pos, max = pow(10,9) + 7;
        cin>>n;

        vector<int> A(n);

        for(int &it : A)
        cin>>it;

        for(int i=0; i<n; i++)
        {
            if(A[i] < min)
            {
                min = A[i];
                min_pos = i+1;
            }
        }

        if(min_pos%2)
        {
            cout<<n/2<<"\n";

            for(int i=2; i<=n; i+=2)
            cout<<i<<" "<<min_pos<<" "<<max<<" "<<min<<"\n";
        }
        else
        {
            if(n%2)
            cout<<n/2 + 1<<"\n";
            else
            cout<<n/2<<"\n";

            for(int i=1; i<=n; i+=2)
            cout<<i<<" "<<min_pos<<" "<<max<<" "<<min<<"\n";
        }
    }
    return 0;
}