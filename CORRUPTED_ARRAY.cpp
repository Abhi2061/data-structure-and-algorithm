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
        ll sum = 0, n, a = -1, b = -1, cnt = 0, pos;
        bool f = false;
        cin>>n;

        vector<ll> A(n+2);

        for(ll &it : A)
        cin>>it;

        sort(A.begin(), A.end());

        for(ll i=0; i<n+1; i++)
        sum += A[i];

        b = sum - A[n+1];

        for(ll i=0; i<n+1; i++)
        {
            if(A[i] == b)
            {
                int temp = A[i];
                A[i] = A[n];
                A[n] = A[n+1];
                A[n+1] = temp;

                f = true;
                break;
            }
        }

        if(!f)
        {
            sum = 0;

            for(int i=0; i<n; i++)
            sum += A[i];

            if(sum == A[n])
            f = true;
        }

        if(!f)
        cout<<-1;
        else
        {
            for(int i=0; i<n; i++)
            cout<<A[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}