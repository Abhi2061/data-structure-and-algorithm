// Problem link : https://codeforces.com/contest/1521/problem/A


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
        ll A, B;
        cin>>A>>B;

        if(B == 1)
        cout<<"NO\n";
        else
        cout<<"YES\n"<<A*B<<" "<<A<<" "<<A*(1+B)<<endl;
    }
    return 0;
}