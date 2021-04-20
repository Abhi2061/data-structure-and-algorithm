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
        bool f = true;
        cin>>n;

        for(int i=0; i<n; i++)
        {
            cin>>temp;

            int sq = sqrt(temp);

            if(sq*sq != temp)
            f = false;
        }

        if(f)
        cout<<"NO\n";
        else
        cout<<"YES\n";
    }
    return 0;
}