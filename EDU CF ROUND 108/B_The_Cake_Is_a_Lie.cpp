// Problem link : https://codeforces.com/contest/1519/problem/B

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin>>T;

    while(T--)
    {
        int n, m, k, cnt = 0;
        cin>>n>>m>>k;

        cnt = n*m - 1;

        if(cnt == k)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}