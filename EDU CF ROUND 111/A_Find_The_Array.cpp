// Problem link : https://codeforces.com/contest/1550/problem/A


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
        int s, n;
        cin>>s;

        n = sqrt(s);

        if(n*n < s)
        n++;

        cout<<n<<ed;
    }
    return 0;
}