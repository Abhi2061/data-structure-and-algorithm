// Problem link : https://codeforces.com/contest/1538/problem/B


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
        int n, sum = 0, cnt = 0;
        cin>>n;

        vector<int> A(n);

        for(int &it : A)
        {
            cin>>it;
            sum += it;
        }

        if(sum % n != 0)
        cout<<"-1\n";

        else
        {
            sum /= n;

            for(int it : A)
            if(it > sum)
            cnt++;

            cout<<cnt<<"\n";
        }
    }
    return 0;
}