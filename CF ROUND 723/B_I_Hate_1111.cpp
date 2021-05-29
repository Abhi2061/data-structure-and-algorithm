// Problem link : https://codeforces.com/contest/1526/problem/B


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
        bool f = false;
        ll n;
        cin>>n;

        while(n > 0)
        {     
            if(n%11 == 0 || n%111 == 0)
            {
                f = true;
                break;
            }

            n -= 111;
        }

        if(f)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}