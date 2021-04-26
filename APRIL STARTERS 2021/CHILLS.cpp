// Problem link : https://www.codechef.com/START3B/problems/CHILLS

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
        ll N, K, mid, sum = 0, l, r, cnt_l = 0, cnt_r = 0;
        cin>>N>>K;

        vector<ll> A(N), H;

        for(ll &it : A)
        cin>>it;

        if(N%2)
        mid = A[N/2];

        else
        mid = (A[N/2 - 1] + A[N/2])/2;

        if(K%2)
        {
            l = mid - (K/2);
            r = mid + (K/2);
        }
        else
        {
            l = mid - (K/2) + 1;
            r = mid + (K/2);
        }
        
        for(ll it : A)
        sum += max(abs(l-it), abs(r-it));

        cout<<sum<<"\n";
    }
    return 0;
}