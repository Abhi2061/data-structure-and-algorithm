// Problem link : https://codeforces.com/contest/1546/problem/B


#include <bits/stdc++.h>
#define ed "\n"
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
        int n, m;
        cin>>n>>m;

        vector<string> VS;
        string ans;

        for(int i=0; i<2*n-1; i++)
        {
            string S;
            cin>>S;

            VS.push_back(S);
        }

        for(int i=0; i<m; i++)
        {
            map<char, int> mp;

            for(int j=0; j<2*n-1; j++)
            mp[VS[j][i]]++;

            for(auto it : mp)
            {
                if(it.second%2)
                {
                    ans.push_back(it.first);
                    break;
                }
            }
        }

        cout<<ans<<ed;
        cout<<flush;
    }
    return 0;
}