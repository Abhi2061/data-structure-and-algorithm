// Problem link : https://codeforces.com/contest/1525/problem/A


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
        int k, den = 100;
        cin>>k;

        for(int i=50; i>=2; i--)
        {
            if(k%i == 0 && den%i == 0)
            {
                k /= i;
                den /= i;
            }
        }

        cout<<den<<"\n";
    }
    return 0;
}