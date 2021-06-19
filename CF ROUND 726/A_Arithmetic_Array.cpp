// Problem link : https://codeforces.com/contest/1537/problem/0


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
        int n, sum = 0, temp, ans = 0;
        cin>>n;

        for(int i=0; i<n; i++)
        {
            cin>>temp;
            sum += temp;
        }

        if(sum < n)
        ans = 1;
        else if(sum > n)
        ans += (sum-n);

        cout<<ans<<endl;
    }
    return 0;
}