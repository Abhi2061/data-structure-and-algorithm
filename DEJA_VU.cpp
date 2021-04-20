//Problem link : https://codeforces.com/contest/1504/problem/A

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
        int l;
        bool f = false;
        string S;
        cin>>S;

        l = S.length();

        for(int i=0; i<l; i++)
        {
            if(S[l-i-1] != 'a')
            {
                f = true;
                cout<<"YES\n";

                for(int j=0; j<i; j++)
                cout<<S[j];

                cout<<'a';

                for(int j=i; j<l; j++)
                cout<<S[j];

                break;
            }
        }

        if(!f)
        cout<<"NO";

        cout<<"\n";
    }
    return 0;
}
