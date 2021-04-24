//Problem link : https://codeforces.com/contest/1512/problem/A

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
        int n;
        cin>>n;

        vector<int> A(n);

        for(int &it : A)
        cin>>it;

        int ans = n, prev;

        for(int i=0; i<n-1; i++)
        {
            prev = A[ans - 1];

            if(A[i] != prev || A[i] != A[i+1])
            {
                if(prev != A[i+1] && A[i] != A[i+1])
                ans = i+2;
                else if(A[i] != prev && A[i] != A[i+1])
                ans = i+1;

                break;
            }

            ans = (ans+1)%n;
        }

        cout<<ans<<"\n";
    }
    return 0;
}
