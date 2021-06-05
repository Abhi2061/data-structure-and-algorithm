// Problem link : https://codeforces.com/contest/1535/problem/A


#include <bits/stdc++.h>
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
        int f, s;
        vector<int> S(4), temp;

        for(int &it : S)
        cin>>it;

        temp = S;

        sort(S.begin(), S.end());
        
        for(int i=0; i<4; i++)
        {
            if(temp[i] == S[3])
            f = i;
            if(temp[i] == S[2])
            s = i;
        }

        if(f/2 != s/2)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}