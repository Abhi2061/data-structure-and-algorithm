//Problem link : https://codeforces.com/contest/1513/problem/A

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
        int n, k;
        cin>>n>>k;

        if(k <= (n-1)/2)
        {
            vector<int> A(n);

            for(int i=0; i<n; i++)
            A[i] = i+1;

            int cnt = 0;

            for(int i=1; i<n; i++)
            {
                if(cnt == k)
                break;

                if(i%2)
                {
                    int temp = A[i];
                    A[i] = A[i+1];
                    A[i+1] = temp;

                    cnt++;
                }              
            }

            for(int it : A)
            cout<<it<<" ";

            cout<<"\n";
        }
        else
        cout<<-1<<"\n";
    }
    return 0;
}
