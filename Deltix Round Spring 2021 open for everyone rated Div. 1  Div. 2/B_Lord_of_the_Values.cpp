// Problem link : https://codeforces.com/contest/1523/problem/B


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

        cout<<3*n<<"\n";

        for(int i=1; i<=n; i+=2)
        {
            cout<<1<<" "<<i<<" "<<i+1<<"\n"; 
            cout<<2<<" "<<i<<" "<<i+1<<"\n"; 
            cout<<1<<" "<<i<<" "<<i+1<<"\n"; 
            cout<<1<<" "<<i<<" "<<i+1<<"\n"; 
            cout<<2<<" "<<i<<" "<<i+1<<"\n"; 
            cout<<1<<" "<<i<<" "<<i+1<<"\n"; 
        }
    }
    return 0;
}
