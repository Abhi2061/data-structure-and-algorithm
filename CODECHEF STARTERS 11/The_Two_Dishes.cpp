// Problem link : https://www.codechef.com/START11B/problems/MAX_DIFF


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
        int N, S;
        cin>>N>>S;

        int t1, t2;

        if(S < N)
        cout<<S<<ed;
        else
        cout<<abs(S-2*N)<<ed;
    }
    
    return 0;
}