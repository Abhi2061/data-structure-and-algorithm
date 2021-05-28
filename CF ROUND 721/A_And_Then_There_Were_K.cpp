// Problem link : https://codeforces.com/contest/1527/problem/A


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
        ll n, temp, cnt = 0, k=0;
        cin>>n;

        temp = n;
        
        while(temp)
        {
            temp /= 2;
            cnt++;
        }

        for(int i=0; i<cnt-1; i++)
        k += pow(2,i);

        cout<<k<<"\n";
    }
    return 0;
}