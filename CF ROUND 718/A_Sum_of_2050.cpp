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
        ll n, div, ans = 0;
        cin>>n;

        if(n%2050)
        cout<<-1<<"\n";
        else
        {
            div = n/2050;

            while(div)
            {
                ans += (div%10);
                div /= 10;
            }

            cout<<ans<<"\n";
        }
    }
    return 0;
}