// Problem link : https://codeforces.com/contest/1553/problem/D


#include <bits/stdc++.h>
#define ed "\n"
using namespace std;
using ll = long long;

bool check(string& s, string& t, int i, int j)
{
    if(j < 0)
    return true;

    if(i < 0)
    return false;

    if(s[i] == t[j])
    return check(s, t, i-1, j-1);

    else
    return check(s, t, i-2, j);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin>>T;

    while(T--)
    {
        string s, t;
        cin>>s>>t;

        int n, m;
        n = s.length();
        m = t.length();

        if(check(s, t, n-1, m-1))
        cout<<"YES"<<ed;
        else
        cout<<"NO"<<ed;
    }
    return 0;
}