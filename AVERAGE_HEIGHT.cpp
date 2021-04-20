//Problem link : https://codeforces.com/contest/1509/problem/A

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

        vector<int> odd, even;

        for(int i=0; i<n; i++)
        {
            cin>>temp;

            if(temp%2)
            odd.push_back(temp);
            else
            even.push_back(temp);
        }

        for(int it : odd)
        cout<<it<<" ";

        for(int it : even)
        cout<<it<<" ";

        cout<<"\n";
    }
    return 0;
}
