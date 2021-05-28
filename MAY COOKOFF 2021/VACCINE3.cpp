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
        ll G, P, day = 0, min = 0, max = 0, total = 1;
        cin>>G>>P;

        vector<int> X(10);

        for(int &it : X)
        cin>>it;

        for(int i=9; i>=G; i--)
        total += X[i];

        min = total / P;

        if(total%P)
        min++;

        total += (X[G-1]-1);

        max = total / P;

        if(total%P)
        max++;

        cout<<min<<" "<<max<<"\n";
    }
    return 0;
}