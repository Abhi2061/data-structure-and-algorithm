//Problem link : https://www.codechef.com/START2C/problems/T20MCH

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int R, O, C;
    cin>>R>>O>>C;

    R -= C;
    O = 20 - O;
    
    if(36*O > R)
    cout<<"YES";
    else
    cout<<"NO";
    
    return 0;
}