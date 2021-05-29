// Problem link : https://codeforces.com/contest/1526/problem/A


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
        int n, temp;
        cin>>n;

        vector<int> A(2*n);

        for(int &it : A)
        cin>>it;

        sort(A.begin(), A.end());

        for(int i=0; i<2*n; i+=2)
        {
            temp = A[i];
            A[i] = A[i+1];
            A[i+1] = temp;
        }

        temp = A[0];
        A[0] = A[2*n - 1];
        A[2*n - 1] = temp;

        for(int it : A)
        cout<<it<<" ";

        cout<<"\n";
    }
    return 0;
}