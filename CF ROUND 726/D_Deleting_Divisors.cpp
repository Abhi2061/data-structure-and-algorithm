// Problem link : https://codeforces.com/contest/1537/problem/D


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
        int n;
        cin>>n;

        if(n%2)
        cout<<"Bob"<<endl;

        else if(n&(n-1))
        cout<<"Alice"<<endl;

        else
        {
            int c = 0;

            while(n > 1)
            {
                n /= 2;
                c++;
            }

            if(c%2)
            cout<<"Bob"<<endl;
            else
            cout<<"Alice"<<endl;
        }
    }
    return 0;
}