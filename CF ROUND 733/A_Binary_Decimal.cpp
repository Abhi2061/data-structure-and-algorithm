// Problem link : https://codeforces.com/contest/1530/problem/A


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
        int n, m = 0;
        cin>>n;

        while(n)
        {
            m = max(m, n%10);
            n /= 10;
        }

        cout<<m<<ed;
    }
    return 0;
}