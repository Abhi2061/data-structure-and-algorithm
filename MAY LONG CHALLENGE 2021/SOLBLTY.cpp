// Problem link : https://www.codechef.com/MAY21C/problems/SOLBLTY


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
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int T;
    cin>>T;

    while(T--)
    {
        int X, A, B;
        cin>>X>>A>>B;

        A += B*(100-X);

        cout<<A*10<<"\n";
    }
    return 0;
}