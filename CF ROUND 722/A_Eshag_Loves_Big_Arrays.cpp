// Problem link : https://codeforces.com/contest/1529/problem/A


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
        int n, min = INT_MAX, cnt = 0;
        cin>>n;

        vector<int> A(n);

        for(int &it : A)
        cin>>it;

        for(int it : A)
        {
            if(it < min)
            {
                min = it;
                cnt = 0;
            }
            if(it == min)
            cnt++;            
        }

        cout<<n-cnt<<"\n";
    }
    return 0;
}