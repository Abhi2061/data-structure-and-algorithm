// Problem link : https://www.codechef.com/LTIME100B/problems/SOD3


#include <bits/stdc++.h>
#define ed "\n"
#define all(x) x.begin(), x.end()
#define input(x)       \
    for (auto &it : x) \
    cin >> it
#define output(x, y)  \
    for (auto it : x) \
    cout << it << y

using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--)
    {
        ll L, R;
        cin>>L>>R;

        if(L%3)
        L += (3-(L%3));

        R -= (R%3);

        ll diff = R-L;

        ll count = 0;
        
        if(diff > 0)
        count = diff/3;

        if(R >= L)
        count++;

        cout<<count<<ed;
    }
    
    return 0;
}