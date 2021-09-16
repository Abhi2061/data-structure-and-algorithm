// Problem link : https://www.codechef.com/START11B/problems/BIGARRAY


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
        ll N, S;
        cin>>N>>S;

        ll total = ((N+1)*N)/2;
        ll x = total - S;

        if(x >= 1 and x <= N)
        cout<<x<<ed;
        else
        cout<<-1<<ed;
    }
    
    return 0;
}