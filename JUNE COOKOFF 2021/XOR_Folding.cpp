// Problem link : https://www.codechef.com/COOK130C/problems/XORFOLD


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
        string S;
        int n, m, cnt = 0;
        cin>>n>>m;

        for(int i=0; i<n; i++)
        {
            cin>>S;

            for(char it : S)
            if(it == '1')
            cnt++;
        }

        if(cnt%2)
        cout<<"YES"<<ed;
        else
        cout<<"NO"<<ed;
    }
    return 0;
}